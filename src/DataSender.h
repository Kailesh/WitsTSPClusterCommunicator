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
	DataSender(string address);
	virtual ~DataSender();

	void makeRequest();
	string generateRequestPOSTString();

private:
	string _address;
};

#endif /* DATASENDER_H_ */
