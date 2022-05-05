#pragma once
#include <string>
#include "TimeNode3.h"

using namespace std;

class FlightNode3
{
public:
	FlightNode3();
	void ShowNode();
	string getNumber();
	void GetFlightTimeMinutes();
private:
	string number;
	string DeparturePoint;//Соответствует date[0]
	string DestinationPoint;//Соответствует date[1]
	TimeNode3 date[2];
};

void DemoFlightNode3WithTime();