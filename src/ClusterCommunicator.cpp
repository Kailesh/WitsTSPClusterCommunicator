//============================================================================
// Name        : ClusterCommunicator.cpp
// Author      : Kailesh Ramjee
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Poco/Net/HTTPClientSession.h"
#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTMLForm.h"
#include "Poco/Net/HTTPResponse.h"
#include "Poco/StreamCopier.h"
#include <json/json.h>
#include <fstream>

using namespace std;
using namespace Poco::Net;


int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	HTTPClientSession s("localhost");
	//s.setProxy("localhost", srv.port());
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	HTTPRequest request(HTTPRequest::HTTP_GET, "/test_complex_01.json");
	HTMLForm form;
	form.add("entry1", "value1");
	form.prepareSubmit(request);
	s.sendRequest(request);
	HTTPResponse response;
	std::istream& rs = s.receiveResponse(response);


	ofstream myFile("request.json");

	if (myFile.is_open())
	{
		Poco::StreamCopier::copyStream(rs, myFile);
		myFile.close();
	}
	else
	{
		cout << "Could not output to file!" << endl;
	}

	// The following variable contains the root value after parsing
	Json::Value rootValue;
	Json::Reader myReader;

	ifstream myInputFile("request.json", ifstream::binary);
	cout << myInputFile << endl;

	bool parsingSucceeded = myReader.parse( myInputFile, rootValue);

	if (!parsingSucceeded)
	{
		// Notify the user that parsing has failed and display an error message
		cout << "The parsing of configuration has failed:\n" << myReader.getFormattedErrorMessages();
		int x = 9;
		cin >> x;
		return 0;
	}

	string countString = rootValue.get("count", "").asString();
	int countInt = rootValue.get("count", "Not found").asInt();

	cout << "count is parsed as --> " << countString << " or --> " << countInt << endl;
	int x = 9;
	cin >> x;
	return 0;
}


