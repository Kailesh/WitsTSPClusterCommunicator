/*
 * ResultGenerator.h
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#ifndef RESULTGENERATOR_H_
#define RESULTGENERATOR_H_


#include <json/json.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class ResultGenerator {
public:
	ResultGenerator(unsigned int bestPathLength, vector<string> names);


	virtual ~ResultGenerator();
	void setRoute(vector<unsigned int> route);
	void constructJSONStream();
	void createJSONFile();

private:



	unsigned int _bestPathLength;
	vector<string> _route;
	Json::Value _responseRoot;

};

#endif /* RESULTGENERATOR_H_ */
