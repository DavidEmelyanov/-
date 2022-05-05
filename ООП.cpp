#include <iostream>
#include <Windows.h>
#include "ООП-1 лаба.h"
#include "ООП-2 лаба.h"
#include "ООП-3 лаба.h"
#include "ООП-4 лаба.h"
#include "ООП-5 лаба.h"
#include "CheckInt.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	while (true)
	{
		system("cls");
		cout << "0) Выход.\n";
		cout << "1) Лабораторная работа 1.\n";
		cout << "2) Лабораторная работа 2.\n";
		cout << "3) Лабораторная работа 3.\n";
		cout << "4) Лабораторная работа 4.\n";
		cout << "5) Лабораторная работа 5.\n";
		choice = CheckInt();
		switch (choice)
		{
			case 0:
			{
				return 0;
			}
			case 1:
			{
				lab1main();
				break;
			}
			case 2:
			{
				lab2main();
				break;
			}
			case 3:
			{
				lab3main();
				break;
			}
			case 4:
			{
				lab4main();
				break;
			}
			case 5:
			{
				lab5main();
				break;
			}
			default:
			{
				cout << "\nВведите корректное значение.\n";
				system("pause");
				break; 
			}
		}
	}
}