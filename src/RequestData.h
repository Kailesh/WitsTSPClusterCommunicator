/*
 * RequestData.h
 *
 *  Created on: 12 May 2012
 *      Author: Kailesh Ramjee
 */

#ifndef REQUESTDATA_H_
#define REQUESTDATA_H_

#include <vector>
#include <string>
using namespace std;

class RequestData {
public:
	/**
	 * A Constructor
	 */
	RequestData();

	/**
	 * A Destructor
	 */
	virtual ~RequestData();

	/**
	 *  Getter function that returns the no. of cities
	 *  @return The no. of cities
	 */
	int getNumberOfCities() const;

	/**
	 *  Setter function that sets the no. of the cities
	 *  @param numberOfCities The number of cities
	 */
	void setNumberOfCities(int numberOfCities);

	/**
	 *  Getter function that returns the names of the cities
	 *  @return A vector of city names
	 */
	vector<string> getCityNames() const;

	/**
	 *  Setter function that sets the names of the cities
	 *  @param cityNames Vector of strings with the names of the cities
	 */
	void setCityNames(vector<string> cityNames);

	/**
	 *  Getter function that returns the distance matrix
	 *  @return A vector of city names
	 */
	vector<vector<int> > getDistanceMatrix() const;

	/**
	 *  Setter function that sets distance matrix
	 *  @param distanceMatrix 2-D Vector of the distances between the cities
	 */
	void setDistanceMatrix(vector<vector<int> > distanceMatrix);

private:
	/**
	 * Variable that stores the number of cities in the TSP problem
	 */
	int _numberOfCities;

	/**
	 * The distance matrix between n cities is a n by n matrix
	 */
	vector<vector<int> > _distanceMatrix;

	/**
	 * The names of the cities stored in this vector
	 */
	vector<string> _cityNames;
};

#endif /* REQUESTDATA_H_ */
