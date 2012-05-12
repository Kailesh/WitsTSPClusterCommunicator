/*
 * Requester.h
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#ifndef REQUESTER_H_
#define REQUESTER_H_

#include "Poco/Net/HTTPClientSession.h"
#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTTPResponse.h"
#include "Poco/StreamCopier.h"
#include <fstream>
#include <string>
using namespace std;
using namespace Poco::Net;

class Requester {
public:
	/**
	 * A Constructor
	 */
	Requester(string address);

	/**
	 * A Destructor
	 */
	virtual ~Requester();

	/**
	 *  Creates connection to web-server and receives
	 *  TSP data in the from of an output stream
	 */
	void connectToWebServer();

	/**
	 *  Dumps the data in a JSON file
	 *  @param JSONFileName The name of the file to store the TSP data
	 */
	void createJSONFile(istream& rs);

private:

	/**
	 * The name of address of the web-server
	 */
	string _address;
};

#endif /* REQUESTER_H_ */
