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

	//Generator result
	vector<unsigned int> route;
	ResultGenerator myGenerator(764, route);








	return 0;
}
