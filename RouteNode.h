#pragma once
#include <string>

using namespace std;

class RouteNode
{
private:
	int number;
	int averageDurationTime;
	int busStopsCount;
	string* busStops;
public:
	RouteNode();
	RouteNode(int number, int averageDurationTime, int busStopsCount, string* busStops);
	void WriteRouteToConsole();
	void ShowNode();
	friend int* FindRouteTo(RouteNode** Route, int countRouts, string busStop);
};
void RouteMenu();
RouteNode** CreateRouteNodeList(int count);
void ReadRouteFromConsole();
void DemoRoute();
int* FindRouteTo(RouteNode** Routes, int countRouts, string busStop);