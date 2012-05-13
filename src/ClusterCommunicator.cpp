//============================================================================
// Name        : ClusterCommunicator.cpp
// Author      : Kailesh Ramjee
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Requester.h"
#include "DataExtractor.h"
#include "RequestData.h"
#include "ResultGenerator.h"

#include <iostream>
#include <json/json.h>
#include <vector>

using namespace std;


int main() {

	string webServerAddress = "localhost";
	Requester myRequester(webServerAddress);
	myRequester.connectToWebServer();


	//Extractor
	DataExtractor myExtractor;
	myExtractor.parseDataFromFile();
	RequestData myTSPData = myExtractor.constructTSPData();
	vector<vector<unsigned int> > distanceMatrix(myTSPData.getDistanceMatrix());


	//-------Algorithm-------
	vector<unsigned int> bestRoute; // Starts at 0 being the first city in the distance matrix
	bestRoute.push_back(0);
	bestRoute.push_back(2);
	bestRoute.push_back(1);
	bestRoute.push_back(3);

	//-----------------------

	//Generator result
	vector<unsigned int> route;
	ResultGenerator myGenerator(764, myTSPData.getCityNames());
	myGenerator.setRoute(bestRoute);
	myGenerator.constructJSONStream();


	return 0;
}
