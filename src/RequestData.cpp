/*
 * RequestData.cpp
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#include "RequestData.h"

RequestData::RequestData() {
	// TODO Auto-generated constructor stub

}

RequestData::~RequestData() {
	// TODO Auto-generated destructor stub
}
unsigned int RequestData::getNumberOfCities() const {
	return _numberOfCities;
}

void RequestData::setNumberOfCities(unsigned int numberOfCities) {
	_numberOfCities = numberOfCities;
}

vector<string> RequestData::getCityNames() const {
	return _cityNames;
}

void RequestData::setCityNames(vector<string> cityNames) {
	_cityNames = cityNames;
}

vector<vector<unsigned int> > RequestData::getDistanceMatrix() const {
	return _distanceMatrix;
}

void RequestData::setDistanceMatrix(vector<vector<unsigned int> > distanceMatrix) {
	_distanceMatrix = distanceMatrix;
}



