#pragma warning(disable:4996)
#include "TimeNode3.h"
#include "CheckInt.h"
#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

void TimeNode3::setYear()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	time_t t;
	time(&t);
	int localYear = 1900 + localtime(&t)->tm_year;
	cout << "\nДиапазон значения от 0 до текущего года\n";
	do
	{
		cout << "Введите год: ";
		this->year = CheckInt();
	} while (this->year<0 || this->year>localYear);
};

void TimeNode3::setMonth()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\nДиапазон значения от 1 до 12\n";
	do
	{
		cout << "Введите месяц: ";
		this->month = CheckInt();
	} while (this->month>12 || this->month<1);
};

void TimeNode3::setDay()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\nДиапазон значения от 1 до 30\n";
	do
	{
		cout << "Введите день: ";
		this->day = CheckInt();
	} while (this->day>30 || this->day<1);
};

void TimeNode3::setHour()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\nДиапазон значения от 0 до 23\n";
	do
	{
		cout << "Введите часы: ";
		this->hour = CheckInt();
	} while (this->hour < 0 || this->hour>23);
};

void TimeNode3::setMinute()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\nДиапазон значения от 0 до 59\n";
	do
	{

		cout << "Введите минуты: ";
		this->minute = CheckInt();
	} while (this->minute>59 || this->minute<0);
};

int TimeNode3::getYear()
{
	return this->year;
};

int TimeNode3::getMonth()
{
	return this->month;
};

int TimeNode3::getDay()
{
	return this->day;
};

int TimeNode3::getHour()
{
	return this->hour;
};

int TimeNode3::getMinute()
{
	return this->minute;
};

void TimeNode3::ShowNode()
{
	if (this->day < 10)
	{
		cout << "0" << this->day << ".";
	}
	else
	{
		cout << this->day << ".";
	}
	if (this->month < 10)
	{
		cout << "0" << this->month << ".";
	}
	else
	{
		cout << this->month << ".";
	}
	cout << this->year;
	cout << " ";
	if (this->hour < 10)
	{
		cout << "0" << this->hour << ".";
	}
	else
	{
		cout << this->hour;
	}
	cout << ":";
	if (this->minute < 10)
	{
		cout << "0" << this->minute;
	}
	else
	{
		cout << this->minute;
	}
};