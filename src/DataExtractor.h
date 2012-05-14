/*
 * DataExtractor.h
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */
#ifndef DATAEXTRACTOR_H_
#define DATAEXTRACTOR_H_

#include "RequestData.h"
#include <json/json.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


class DataExtractor {
public:
	/**
	 * A Constructor
	 */
	DataExtractor();
	/**
	 * A Destructor
	 */
	virtual ~DataExtractor();
	/**
	 * Receives the data from a file and parses the data
	 */
	void parseDataFromFile();
	/**
	 * Receives the data from a file and parses the data
	 */
	RequestData constructTSPData();

private:
	/**
	 * Json::Value that forms the root of the file
	 */
	Json::Value _rootValue;
};

#endif /* DATAEXTRACTOR_H_ */
