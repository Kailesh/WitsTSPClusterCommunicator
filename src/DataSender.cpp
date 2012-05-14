/*
 * DataSender.cpp
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#include "DataSender.h"

DataSender::DataSender(string address):
_address(address)
{
	// TODO Auto-generated constructor stub

}

DataSender::~DataSender() {
	// TODO Auto-generated destructor stub
}

void DataSender::makeRequest() {
	HTTPClientSession session(_address);
	//s.setProxy("localhost", srv.port());
	HTTPRequest request(HTTPRequest::HTTP_POST, "/TSPResults.json"); // This will have to change
	request.setContentType("application/json");
	request.setKeepAlive(true);

	session.sendRequest(request) << generateRequestPOSTString();

	HTTPResponse response;
	std::istream& rs = session.receiveResponse(response);

	// Output the HTTP response message and the content of the message
	response.write(cout) ;
	Poco::StreamCopier::copyStream(rs, cout);
}

string DataSender::generateRequestPOSTString() {
	ifstream myResultFile("TSPResults.json", ifstream::binary);
	string tempString, requestMessage;
	getline(myResultFile,tempString);
	while ( myResultFile ) {
		requestMessage += tempString + "\n";
		getline(myResultFile, tempString);
	}
	myResultFile.close();
	return requestMessage;
}

