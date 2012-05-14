/*
 * DataSender.h
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#ifndef DATASENDER_H_
#define DATASENDER_H_

#include <iostream>
#include <fstream>
#include <string>
#include "Poco/Net/HTTPClientSession.h"
#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTTPResponse.h"
#include "Poco/StreamCopier.h"
#include "Poco/URI.h"

using namespace std;
using namespace Poco::Net;

class DataSender {
public:
	/**
	 * A Constructor
	 * @param address the address of the web-server
	 */
	DataSender(string address);
	/**
	 * A Destructor
	 */
	virtual ~DataSender();
	/**
	 * Make a request as a client. This request will POST
	 * the results using a JSON structure.
	 */
	void makeRequest();
	/**
	 * Generates a string from a JOSN file
	 * @return The generated string
	 */
	string generateRequestPOSTString();

private:
	/**
	 * The address of the web-server
	 */
	string _address;
};

#endif /* DATASENDER_H_ */
