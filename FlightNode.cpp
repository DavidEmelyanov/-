#pragma once
#include <iostream>
#include "functions.h"
#include "FlightNode.h"

using namespace std;

void ShowFlightNode(FlightNode* temp)
{
    cout << endl;
    cout << "Рейс " << temp->DeparturePoint << " - " << temp->DestinationPoint << " находится в полёте " << temp->time << " минут.\n";
    cout << endl;
};

void DemoFlight()
{
    FlightNode* temp = new FlightNode;
    temp->DeparturePoint = "Москва";
    temp->DestinationPoint = "Берлин";
    temp->time = 140;
    ShowFlightNode(temp);
    delete temp;
};

FlightNode* CinFlightNode()
{
    FlightNode* temp = new FlightNode;
    cout << "Введите пункт отправления: ";
    cin >> temp->DeparturePoint;
    cout << endl;
    cout << "Введите пункт назначения: ";
    cin >> temp->DestinationPoint;
    cout << endl;
    cout << "Введите время полёта: ";
    temp->time = CheckInt();
    cout << endl;
    return temp;
};

void DemoFlightAdress()
{
    FlightNode temp;
    cout << "temp адрес: " << &temp << "\n";
    temp.DeparturePoint = "Казань";
    temp.DestinationPoint = "Санкт-Петербург";
    temp.time = 90;
    ShowFlightNode(&temp);
    FlightNode* NewTemp = &temp;
    cout << endl << endl << "NewTemp адрес: " << NewTemp << "\n";
    ShowFlightNode(NewTemp);
    cout << endl << endl;
    NewTemp->DeparturePoint = "Москва";
    NewTemp->DestinationPoint = "Берлин";
    NewTemp->time = 140;
    cout << endl;
    cout << "NewTemp адрес:" << NewTemp;
    ShowFlightNode(NewTemp);
    cout << "temp: " << &temp << endl;
    ShowFlightNode(&temp);
};

void DemoDynamicFlight()
{
    FlightNode* Flight;
    Flight = CinFlightNode();
    cout << endl << "В Flight сейчас:\n";
    ShowFlightNode(Flight);
    delete Flight;
};

void DemoDynamicFlights()
{
    int count;
    do
    {
        cout << "Введите количество рейсов: ";
        count = CheckInt();
        cout << endl;
    } while (count <= 0);
    FlightNode** Flight = new FlightNode * [count];
    for (int i = 0; i < count; i++)
    {
        Flight[i] = CinFlightNode();
    }
    cout << endl;
    cout << "Сейчас в Flights:\n";
    for (int i = 0; i < count; i++)
    {
        ShowFlightNode(Flight[i]);
    }
    cout << endl;
    FindShortestFlight(Flight, count);
    for (int i = 0; i < count; i++)
    {
        delete Flight[i];
    }
};

void FindShortestFlight(FlightNode** flights, int count)
{
    int min = flights[0]->time;
    for (int i = 0; i < count; i++)
    {
        if (flights[i]->time < min)
        {
            min = flights[i]->time;
        }
    }
    cout << endl;
    for (int i = 0; i < count; i++)
    {
        if (flights[i]->time == min)
        {
            cout << "Самый короткий рейс: ";
            ShowFlightNode(flights[i]);
            break;
        }
    }
    cout << endl;
};

FlightNode* MakeFlight(const char* DeparturePoint, const char* DestinationPoint, int time)
{
    FlightNode* temp = new FlightNode;
    temp->DeparturePoint = DeparturePoint;
    temp->DestinationPoint = DestinationPoint;
    temp->time = time;
    return temp;
};

FlightNode* CopyFlight(FlightNode* Flight)
{
    FlightNode* temp = new FlightNode;
    temp->DeparturePoint = Flight->DeparturePoint;
    temp->DestinationPoint = Flight->DestinationPoint;
    temp->time = Flight->time;
    return temp;
};