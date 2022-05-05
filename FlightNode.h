#pragma once
#include <string>

using namespace std;

struct FlightNode
{
	string DeparturePoint;
	string DestinationPoint;
	int time;
};
// Структура Рейс
// Начало описания структуры
// Строковое поле Пункт Вылета
// Строковое поле Пункт назначения
// Целочисленное поле Время полета в минутах
// Конец описания структуры

void DemoFlight();
void ShowFlightNode(FlightNode* temp);
FlightNode* CinFlightNode();
void DemoFlightAdress();
void DemoDynamicFlight();
void DemoDynamicFlights();
void FindShortestFlight(FlightNode** flights, int count);
FlightNode* MakeFlight(const char* DeparturePoint, const char* DestinationPoint, int time);
FlightNode* CopyFlight(FlightNode* Flight);