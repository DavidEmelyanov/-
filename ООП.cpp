#include <iostream>
#include <Windows.h>
#include "���-1 ����.h"
#include "���-2 ����.h"
#include "���-3 ����.h"
#include "���-4 ����.h"
#include "���-5 ����.h"
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
		cout << "0) �����.\n";
		cout << "1) ������������ ������ 1.\n";
		cout << "2) ������������ ������ 2.\n";
		cout << "3) ������������ ������ 3.\n";
		cout << "4) ������������ ������ 4.\n";
		cout << "5) ������������ ������ 5.\n";
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
				cout << "\n������� ���������� ��������.\n";
				system("pause");
				break; 
			}
		}
	}
}