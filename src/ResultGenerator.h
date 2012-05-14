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
	/**
	 * A Constructor
	 * @param bestPathLength The best path length solution
	 * @param Vector containing the names of the cities to visit
	 */
	ResultGenerator(unsigned int bestPathLength, vector<string> names);
	/**
	 * A Destructor
	 */
	virtual ~ResultGenerator();
	/**
	 * Creates a vector of city names in the order specified by the parameter
	 * @param route The route of the optimized TSP solution
	 */
	void setRoute(vector<unsigned int> route);
	/**
	 * Creates a JSON stream with the result of the TSP
	 */
	void constructJSONStream();
	/**
	 * Places the JSON stream in a file
	 */
	void createJSONFile();

private:
	/**
	 * The optimized path length
	 */
	unsigned int _bestPathLength;
	/**
	 * The route containing names of the cities to navigate
	 */
	vector<string> _route;
	/**
	 * The JSON root of the JSON structure
	 */
	Json::Value _responseRoot;

};

#endif /* RESULTGENERATOR_H_ */
