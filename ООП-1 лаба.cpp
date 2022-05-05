#include <iostream>
#include <Windows.h>
#include "���-1 ����.h"
#include "funcs.h"

using namespace std;

int lab1main()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (true)
    {
        system("cls");
        cout << "\t\t\t\t\t\t���� ���������:\n";
        cout << "|0) ����� �� ���������.                          |11) �������� � ������� �� ��������.                 |\n";
        cout << "|1) Breakpoints.                                 |12) �������� � ������� �� ������.                   |\n";
        cout << "|2) ���������� �������.                          |13) ���������.                                      |\n";
        cout << "|3) ����� �������� ������ ���������.            |14) �������� ��������� � �������.                   |\n";
        cout << "|4) ����� ���� ���� � �������.                   |15) ������������ ������(double) � ��� �������������.|\n";
        cout << "|5) ���������� � ������� ����������.             |16) ������������ ������(bool) � ��� �������������.  |\n";
        cout << "|6) ������������� ������� DemoGetPower().        |17) ������������ ������(char) � ��� �������������.  |\n";
        cout << "|7) ����������.                                  |18) ���������� ������������� �������(double).       |\n";
        cout << "|8) ������ ����������.                           |19) ����� ������� ����������� �������� �������(int).|\n";
        cout << "|9) ������ ����� �������.                        |20) ����� ���� ������������� �������(char).         |\n";
        cout << "|10) ������.                                     |21) ������ ��������� �������� ������������� �������.|\n";
        int choice = CheckInt();
        switch (choice)
        {
            case 0:
            {
                cout << "����� �� ���������...\n";
                return 0;
            }
            case 1:
            {
                Breakpoints();
                system("pause");
                break;
            }
            case 2:
            {
                int arr[10];
                for (int i = 0; i < 10; i++)
                {
                    cout << "������� ������� �" << i << ":";
                    arr[i] = CheckInt();
                }
                cout << "��������������� �������:\n";
                for (int i = 0; i < 10; i++)
                {
                    for (int j = i; j < 9; j++)
                    {
                        if (arr[j+1] < arr[i])
                        {
                            int temp = arr[i];
                            arr[i] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
                    cout << arr[i] << " ";
                }
                cout << endl;
                system("pause");
                break;
            }
            case 3:
            {
                double DoubleArr[12];
                for (int i = 0; i < 12; i++)
                {
                    DoubleArr[i] = drandom(-1.5, 1500.8);
                    cout << DoubleArr[i] << " ";
                }
                int sum = 0;
                cout << "\n������� ��������:\n";
                double searchingValue;
                cin >> searchingValue;
                for (int i = 0; i < 12; i++)
                {
                    if (DoubleArr[i] >= searchingValue)
                    {
                        sum++;
                    }
                }
                cout << "��������� ������ " << searchingValue << ": " << sum;
                cout << endl;
                system("pause");
                break;
            }
            case 4:
            {
                char charArr[8];
                for (int i = 0; i < 8; i++)
                {
                    cout << "������� ������� �" << i << ":";
                    cin >> charArr[i];
                }
                cout << "��� ����� � ���������� �������: \n";
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < sizeof(alphabet); j++)
                    {
                        if (charArr[i] == alphabet[j])
                        {
                            cout << charArr[i] << "\t";
                            break;
                        }
                    }
                }
                cout << endl;
                system("pause");
                break;
            }
            case 5:
            {
                cout << "������� ���������� ��������:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "������� ���������� ��������:\n";
                    int number = CheckInt();
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "������� �������� base:\n";;
                    double base;
                    cin >> base;
                    cout << "������� �������� exponent:\n";
                    int exponent = CheckInt();
                    cout << base << "^" << exponent << " = " << GetPower(base, exponent) << endl;
                }
                cout << endl;
                system("pause");
                break;
            }
            case 6:
            {
                cout << "������� ���������� ��������:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "������� ���������� ��������:\n";
                    int number = CheckInt();
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "������� �������� base:\n";;
                    double base;
                    cin >> base;
                    cout << "������� �������� exponent:\n";
                    int exponent = CheckInt();
                    cout << "������������ ������� DemoGetPower().\n";
                    DemoGetPower(base, exponent);
                }
                cout << endl;
                system("pause");
                break;
            }
            case 7:
            {
                cout << "������� ���������� ��������:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "������� ���������� ��������:\n";
                    int number = CheckInt();
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "������� ��������:\n";
                    int value = CheckInt();
                    cout << "�������� " << value;
                    RoundToTens(value);
                    cout << " ���������� �� " << value << ";\n";
                }
                cout << endl;
                system("pause");
                break;
            }
            case 8:
            {
                cout << "��� ������ ������� ��������� ������ ���������� ����� ������.\n";
                int a = 5;
                int b = 4;
                cout << "����� ���������� a: " << &a << endl;
                cout << "����� ���������� b: " << &b << endl;
                double c = 13.5;
                cout << "����� ���������� c: " << &c << endl;
                bool d = true;
                cout << "����� ���������� d: " << &d << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 9:
            {
                int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };
                cout << "������ ����� ������ ���� int: " << sizeof(int) << endl;
                for (int i = 0; i < 10; i++)
                {
                    cout << "����� ���������� a[" << i << "]: " << &a[i] << endl;
                }
                cout << endl;
                cout << "������ ����� ������ ���� double: " << sizeof(double) << endl;
                double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2
                };
                for (int i = 0; i < 10; i++)
                {
                    cout << "����� ���������� b[" << i << "]: " << &b[i] << endl;
                }
                cout << endl;
                system("pause");
                break;
            }
            case 10:
            {
                cout << "������ ������ ���������� a � b.\n";
                int a = 5;
                int& b = a;
                cout << "����� ���������� a: " << &a << endl;
                cout << "����� ���������� b: " << &b << endl;
                cout << endl;
                cout << "\n�������� ���������� b �������� 7.\n";
                b = 7;
                cout << "�������� ���������� a: " << a << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 11:
            {
                double a = 5.0;
                cout << "����� � � ������� main(): " << &a << endl;
                cout << "�������� a � ������� main(): " << a << endl;
                cout << endl;
                Foo(a);
                cout << endl;
                cout << "�������� a � ������� main() �����";
                cout << " ������� Foo(a): " << a << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 12:
            {
                double a = 5.0;
                cout << "����� � � ������� main(): " << &a << endl;
                cout << "�������� a � ������� main(): " << a << endl;
                cout << endl;
                SecondFoo(a);
                cout << endl;
                cout << "�������� a � ������� main() �����";
                cout << "������� SecondFoo(a) : " << a << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 13:
            {
                int a = 5;
                int* pointer = &a;
                cout << "����� ���������� a: " << &a << endl;
                cout << "����� � pointer: " << pointer << endl;
                cout << "����� ���������� pointer: " << &pointer << endl;
                cout << endl;
                cout << "*pointer = 7;" << endl;
                *pointer = 7;
                cout << "�������� � ���������� a: " << a << endl;
                cout << "�������� �� ������ pointer: " << *pointer << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 14:
            {
                double value = 5.0;
                double* pointer = &value;
                cout << "����� ���������� value � main(): " << &value << endl;
                cout << "����� � ���������� pointer � main(): " << pointer << endl;
                cout << "����� ���������� pointer � main(): " << &pointer << endl;
                cout << "�������� ���������� a � main(): " << value << endl;
                cout << endl;
                ThirdFoo(pointer);
                cout << endl;
                cout << "�������� ���������� a � main(): " << value << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 15:
            {
                double* doubleArray = new double[8];
                cout << "������ ������������ �����:\n";
                for (int i = 0; i < 8; i++)
                {
                    doubleArray[i] = drandom(-150,150);
                    cout << doubleArray[i] << " ";
                }
                delete[] doubleArray;
                cout << endl;
                system("pause");
                break;
            }
            case 16:
            {
                bool* boolArray = new bool[8];
                cout << "������ ������� ����������:\n";
                for (int i = 0; i < 8; i++)
                {
                    boolArray[i] = false;
                    if (rand() % 2 == 1)
                    {
                        boolArray[i] == true;
                        cout << "true ";
                    }
                    else
                    {
                        boolArray[i] = false;
                        cout << "false ";
                    }
                }
                cout << endl;
                delete[] boolArray;
                system("pause");
                break;
            }
            case 17:
            {
                cout << "������� ������� ����������� �������:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "������� ������� ����������� �������:\n";
                    int number = CheckInt();
                }
                char* charArray = new char[number];
                for (int i = 0; i < number; i++)
                {
                    cout << "������� �������� ��� charArray[" << i << "] = ";
                    cin >> charArray[i];
                    cout << endl;
                }
                cout << "������� �������� ������� charArray:\n";
                for (int i = 0; i < number; i++)
                {
                    cout << charArray[i] << '\t';
                }
                cout << endl;
                delete[] charArray;
                system("pause");
                break;
            }
            case 18:
            {
                double* doubleArray = new double[10];
                cout << "������ ������������ �����:\n";
                for (int i = 0; i < 10; i++)
                {
                    doubleArray[i] = drandom(-150,150);
                    cout << doubleArray[i] << " ";
                }
                DoubleSorting(doubleArray);
                cout << "\n��������������� �������:\n";
                for (int i = 0; i < 10; i++)
                {
                    cout << doubleArray[i] << " ";
                }
                cout << endl;
                delete[] doubleArray;
                system("pause");
                break;
            }
            case 19:
            {
                int* arr = new int[10];
                for (int i = 0; i < 10; i++)
                {
                    arr[i] = rand() % 100;
                    cout << arr[i] << " ";
                }
                cout << endl;
                int searchingElement = CheckInt();
                bool isTrue = false;
                for (int i = 0; i < 10; i++)
                {
                    if (arr[i] == searchingElement)
                    {
                        isTrue = true;
                        cout << "������ �������� ��������: " << i << endl;
                    }
                }
                if (!isTrue)
                {
                    cout << "������ �������� �� ��� ������.\n";
                }
                cout << endl;
                delete[] arr;
                system("pause");
                break;
            }
            case 20:
            {
                char* charArray = new char[15];
                bool* charNumberArray = new bool[sizeof(alphabet)];
                for (int j = 0; j < 15; j++)
                {
                    cin >> charArray[j];
                    for (int i = 0; i < sizeof(alphabet); i++)
                    {
                        if (alphabet[i] == charArray[j])
                        {
                            charNumberArray[j] = true;
                            break;
                        }
                        else
                        {
                            charNumberArray[j] = false;
                        }
                    }
                }
                for (int i = 0; i < 15; i++)
                {
                    if (charNumberArray[i])
                    {
                        cout << charArray[i] << " ";
                    }
                }
                cout << endl;
                delete[] charNumberArray;
                delete[] charArray;
                system("pause");
                break;
            }
            case 21:
            {
                cout << "������� ���������� ��������:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "������� ���������� ��������:\n";
                    int number = CheckInt();
                }
                int** randArray = new int* [number];
                int* capacity = new int[number];//��������� ������� ������������� �������
                for (int i = 0; i < number; i++)
                {
                    cout << "\n������� ������� ������� �" << i + 1 << ":\n";
                    capacity[i] = CheckInt();
                    while (capacity < 0)
                    {
                        cout << "\n������� ������� ������� �" << i + 1 << ":\n";
                        capacity[i] = CheckInt();
                    }
                    randArray[i] = MakeRandomArray(capacity[i]);
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "������ �" << i+1 << endl;
                    for (int j = 0; j < capacity[i]; j++)
                    {
                        cout << randArray[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
                for (int i = 0; i < number; i++)
                {
                    delete[] randArray[i];
                }
                delete[] capacity;
                delete[] randArray;
                system("pause");
                break;
            }
        }
    }
}