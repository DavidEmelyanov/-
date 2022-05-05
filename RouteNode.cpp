#include <iostream>
#include <Windows.h>
#include "CheckInt.h"
#include "RouteNode.h"

using namespace std;

void RouteMenu()
{
	int choice;
	while (true)
	{
		system("cls");
		cout << "Меню:\n";
		cout << "0) Выход\n";
		cout << "1) DemoRoute\n";
		cout << "2) ReadRouteFromConsole\n";
		cout << "3) WriteRouteToConsole\n";
		cout << "4) FindRouteTo\n";
		choice = CheckInt();
		switch (choice)
		{
			case 0:
			{
				return;
			}
			case 1:
			{
				DemoRoute();
				break;
			}
			case 2:
			{
				ReadRouteFromConsole();
				break;
			}
			case 3:
			{
				int count;
				do
				{
					cout << "Введите количество записей: ";
					count = CheckInt();
				} while (count < 1);
				RouteNode** Route = CreateRouteNodeList(count);
				cout << "\n\n";
				for (int i = 0; i < count; i++)
				{
					Route[i]->WriteRouteToConsole();
					cout << endl;
				}
				system("pause");
				break;
			}
			case 4:
			{
				int count;
				do
				{
					cout << "Введите количество записей: ";
					count = CheckInt();
				} while (count < 1);
				RouteNode** Route = CreateRouteNodeList(count);
				cout << endl;
				cout << "Введите искомую остановку: ";
				string busStop;
				string temp;
				cin >> busStop;
				getline(cin, temp);
				busStop += temp;
				int* Arr = FindRouteTo(Route, count, busStop);
				if (Arr[0] != -1)
				{
					int tempIndex = 0;
					cout << "Маршруты, проходящие через остановку " << busStop << ": \n";
					while ((Arr[tempIndex] != -1) && (tempIndex != count))
					{
						Route[tempIndex]->WriteRouteToConsole();
						tempIndex++;
					}
				}
				else
				{
					cout << "Нет маршрута до этой остановки\n";
				}
				system("pause");
				break;
			}
			default:
			{
				cout << "Выберете пункт из списка!\n";
				system("pause");
				break;
			}
		}
	}
}

RouteNode::RouteNode()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do
	{
		cout << "Введите номер маршрута: ";
		this->number = CheckInt();
		if (this->number < 0)
		{
			cout << "Не может быть меньше нуля.\n";
		}
	} while (this->number < 0);
	do
	{
		cout << "Введите среднюю продолжительность маршрута в минутах: ";
		this->averageDurationTime = CheckInt();
		if (this->averageDurationTime < 0)
		{
			cout << "Не может быть меньше нуля.\n";
		}
	} while (this->averageDurationTime < 0);
	do
	{
		cout << "Введите количество остановок: ";
		this->busStopsCount = CheckInt();
		if (this->busStopsCount < 2)
		{
			cout << "Не может быть меньше двух.\n";
		}
	} while (this->busStopsCount < 2);
	this->busStops = new string[this->busStopsCount];
	string temp;
	for (int i = 0; i < this->busStopsCount; i++)
	{
		cout << "Введите остановку №" << i+1 << ": ";
		cin >> this->busStops[i];
		getline(cin, temp);
		this->busStops[i] += temp;
	}
};

RouteNode::RouteNode(int number, int averageDurationTime, int busStopsCount, string* busStops)
{
	this->number = number;
	this->averageDurationTime = averageDurationTime;
	this->busStopsCount = busStopsCount;
	this->busStops = busStops;
}

void RouteNode::ShowNode()
{
	cout << "Номер маршрута: " << this->number << endl;
	cout << "Средняя продолжительность: " << this->averageDurationTime << " минут" << endl;
	cout << "Остановок: " << this->busStopsCount << endl;
	cout << "Остановки: \n";
	for (int i = 0; i < this->busStopsCount; i++)
	{
		cout << this->busStops[i] << endl;
	}
};

void DemoRoute()
{
	int busStopsCount = 3;
	string* s = new string[busStopsCount];
	for (int i = 0; i < busStopsCount; i++)
	{
		s[i] += "Остановка № ";
		s[i] += to_string(i + 1);
	}
	RouteNode Route(1,150,busStopsCount,s);
	Route.ShowNode();
	system("pause");
	return;
};

void ReadRouteFromConsole()
{
	RouteNode* Route = nullptr;
	Route = new RouteNode;
	Route->ShowNode();
	system("pause");
	return;
};

RouteNode** CreateRouteNodeList(int count)//Для создания списка узлов
{
	RouteNode** Route = new RouteNode * [count];
	for (int i = 0; i < count; i++)
	{
		Route[i] = new RouteNode;
	}
	return Route;
}

void RouteNode::WriteRouteToConsole()
{
	cout << "Маршрут №" << this->number << " едет в среднем " << this->averageDurationTime << " минут\n";
	cout << "Останавливается на " << this->busStopsCount << " остановках(-е).";
	cout << "\nМаршрут: ";
	for (int i = 0; i < this->busStopsCount; i++)
	{
		cout << this->busStops[i];
		if (i != this->busStopsCount - 1)
		//В ином случае i будет равно this->busStopsCount и не зайдёт в цикл
		{
			cout << " -> ";
		}
	}
	cout << endl;
	return;
};

int* FindRouteTo(RouteNode** Route, int countRouts, string busStop)
{
	int* arr = new int[countRouts];
	int index = 0;
	for (int i = 0; i < countRouts; i++)
	{
		for (int j = 0; j < Route[i]->busStopsCount; j++)
		{
			if (Route[i]->busStops[j] == busStop)
			{
				arr[index] = i;
				index++;
				break;
			}
		}
	}
	if (index < countRouts)
	{
		arr[index] = -1;
	}
	if (index == 0)
	{
		arr[0] = -1;
	}
	return arr;//Возвращает индексы книг.
};