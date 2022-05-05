#include "FlightNode3.h"
#include <iostream>

using namespace std;

FlightNode3::FlightNode3()
{
	bool check=false;
	cout << "\nВведите пункт отправления: \n";
	cin >> this->DeparturePoint;
	cout << "\nВведите пункт назначения: \n";
	cin >> this->DestinationPoint;
	cout << "\nВведите номер рейса: ";
	cin >> this->number;
	do
	{
		cout << "\nВведите дату отправления.\n";
		this->date[0].setHour();
		this->date[0].setMinute();
		this->date[0].setDay();
		this->date[0].setMonth();
		this->date[0].setYear();
		cout << "\nВведите дату прибытия.\n";
		this->date[1].setHour();
		this->date[1].setMinute();
		this->date[1].setDay();
		this->date[1].setMonth();
		this->date[1].setYear();
		if (this->date[1].getYear() > this->date[0].getYear())
		{
			check = true;
		}
		else if (this->date[1].getMonth() > this->date[0].getMonth())
		{
			check = true;
		}
		else if (this->date[1].getDay() > this->date[0].getDay())
		{
			check = true;
		}
		else if (this->date[1].getHour() > this->date[0].getHour())
		{
			check = true;
		}
		else if (this->date[1].getMinute() > this->date[0].getMinute())
		{
			check = true;
		}
		if (!check)
		{
			cout << "Некорректно введены временные рамки отправления и прибытия. Заполните заново.\n";
		}
	} while (!check);
};

void FlightNode3::ShowNode()
{
	cout << this->number << " " << this->DeparturePoint << " - " << this->DestinationPoint << " Вылет ";
	this->date[0].ShowNode();
	cout << " Прибытие ";
	this->date[1].ShowNode();
	cout << " ";
	this->GetFlightTimeMinutes();
	cout << endl;
};

string FlightNode3::getNumber()
{
	return this->number;
};

void FlightNode3::GetFlightTimeMinutes()
{
	int temp1 = 0;
	temp1 += this->date->getMinute();
	temp1 += this->date[0].getHour() * 60;
	temp1 += this->date[0].getDay() * 60 * 24;
	temp1 += this->date[0].getMonth() * 60 * 24 * 30;
	temp1 += this->date[0].getYear() * 60 * 24 * 30 * 365;
	int temp2 = 0;
	temp2 += this->date[1].getMinute();
	temp2 += this->date[1].getHour() * 60;
	temp2 += this->date[1].getDay() * 60 * 24;
	temp2 += this->date[1].getMonth() * 60 * 24 * 30;
	temp2 += this->date[1].getYear() * 60 * 24 * 30 * 365;
	temp2 -= temp1;
	if (temp2 / (60 * 24)>0)
	{
		cout << " Время в пути: " << temp2 / (60*24) << "д. " << (temp2 % (60 * 24)) / 60 << " ч.\n" << (temp2 % (60 * 24)) % 60 << " мин.\n";
	}
	else 
	if (temp2 / 60 > 0)
	{
		cout << " Время в пути: " << temp2 / 60 << "ч. " << temp2 % 60 << " мин.\n";
	}
	else
	{
		cout << " Время в пути: " << temp2 << " мин.\n";
	}
};

void DemoFlightNode3WithTime()
{
	const int count = 1;
	FlightNode3** Flight = new FlightNode3*[count];
	for (int i = 0; i < count; i++)
	{
		Flight[i] = new FlightNode3;
	}
	for (int i = 0; i < count; i++)
	{
		Flight[i]->ShowNode();
		cout << endl;
	}
};