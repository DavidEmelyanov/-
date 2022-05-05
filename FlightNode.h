#pragma once
#include <string>

using namespace std;

struct FlightNode
{
	string DeparturePoint;
	string DestinationPoint;
	int time;
};
// ��������� ����
// ������ �������� ���������
// ��������� ���� ����� ������
// ��������� ���� ����� ����������
// ������������� ���� ����� ������ � �������
// ����� �������� ���������

void DemoFlight();
void ShowFlightNode(FlightNode* temp);
FlightNode* CinFlightNode();
void DemoFlightAdress();
void DemoDynamicFlight();
void DemoDynamicFlights();
void FindShortestFlight(FlightNode** flights, int count);
FlightNode* MakeFlight(const char* DeparturePoint, const char* DestinationPoint, int time);
FlightNode* CopyFlight(FlightNode* Flight);