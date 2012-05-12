/*
 * Requester.cpp
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#include "Requester.h"

Requester::Requester(string address):
_address(address)
{
	// TODO Auto-generated constructor stub

}

Requester::~Requester() {
	// TODO Auto-generated destructor stub
}

void Requester::connectToWebServer() {
	HTTPClientSession session(_address);
	//s.setProxy("localhost", srv.port());
	HTTPRequest request(HTTPRequest::HTTP_GET, "/TSPData.json");
	session.sendRequest(request);

	HTTPResponse response;
	istream& receivedStream = session.receiveResponse(response);
	createJSONFile(receivedStream);
}

void Requester::createJSONFile(istream& rs) {
	ofstream myFile("TSPData.json");
	if (myFile.is_open())
	{
		Poco::StreamCopier::copyStream(rs, myFile);
		myFile.close();
	}
}
