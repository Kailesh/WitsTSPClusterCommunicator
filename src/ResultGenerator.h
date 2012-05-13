/*
 * ResultGenerator.h
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#ifndef RESULTGENERATOR_H_
#define RESULTGENERATOR_H_

#include <vector>
#include <string>
using namespace std;

class ResultGenerator {
public:
	ResultGenerator(unsigned int bestPathLength, vector<unsigned int> route);


	virtual ~ResultGenerator();
private:
	unsigned int _bestPathLength;
	vector<string>

};

#endif /* RESULTGENERATOR_H_ */
