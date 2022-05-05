#include "ООП-4 лаба.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "CheckInt.h"
#include "GeometricProgram.h"

using namespace std;

int lab4main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice = 0;
	GeometricProgram demo;
	while (true)
	{
		system("cls");
		cout << "Выберете пункт меню:\n";
		cout << "0) Выход\n";
		cout << "1) DemoRing()\n";
		cout << "2) DemoCollision()\n";
		choice = CheckInt();
		switch (choice)
		{
			case 0:
			{
				return 0;
			}
			case 1:
			{
				demo.DemoRing();
				system("pause");
				break;
			}
			case 2:
			{
				demo.DemoCollision();
				system("pause");
				break;
			}
			default:
			{
				cout << "Выберете один из предложенных пунктов!\n";
				system("pause");
				break;
			}
		}
	}
};