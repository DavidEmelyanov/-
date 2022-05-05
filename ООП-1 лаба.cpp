#include <iostream>
#include <Windows.h>
#include "ООП-1 лаба.h"
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
        cout << "\t\t\t\t\t\tМеню программы:\n";
        cout << "|0) Выход из программы.                          |11) Передача в функцию по значению.                 |\n";
        cout << "|1) Breakpoints.                                 |12) Передача в функцию по ссылке.                   |\n";
        cout << "|2) Сортировка массива.                          |13) Указатели.                                      |\n";
        cout << "|3) Поиск значений больше введённого.            |14) Передача указателя в функцию.                   |\n";
        cout << "|4) Поиск всех букв в массиве.                   |15) Динамический массив(double) и его инициализация.|\n";
        cout << "|5) Возведение в степень экспоненты.             |16) Динамический массив(bool) и его инициализация.  |\n";
        cout << "|6) Использование функции DemoGetPower().        |17) Динамический массив(char) и его инициализация.  |\n";
        cout << "|7) Округление.                                  |18) Сортировка динамического массива(double).       |\n";
        cout << "|8) Адреса переменных.                           |19) Поиск индекса задаваемого элемента массива(int).|\n";
        cout << "|9) Адреса ячеек массива.                        |20) Вывод букв динамического массива(char).         |\n";
        cout << "|10) Ссылки.                                     |21) Задать рандомное значение динамическому массиву.|\n";
        int choice = CheckInt();
        switch (choice)
        {
            case 0:
            {
                cout << "Выход из программы...\n";
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
                    cout << "Введите элемент №" << i << ":";
                    arr[i] = CheckInt();
                }
                cout << "Отсортированный вариант:\n";
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
                cout << "\nИскомое значение:\n";
                double searchingValue;
                cin >> searchingValue;
                for (int i = 0; i < 12; i++)
                {
                    if (DoubleArr[i] >= searchingValue)
                    {
                        sum++;
                    }
                }
                cout << "Элементов больше " << searchingValue << ": " << sum;
                cout << endl;
                system("pause");
                break;
            }
            case 4:
            {
                char charArr[8];
                for (int i = 0; i < 8; i++)
                {
                    cout << "Введите элемент №" << i << ":";
                    cin >> charArr[i];
                }
                cout << "Все буквы в символьном массиве: \n";
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
                cout << "Введите количество операций:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "Введите количество операций:\n";
                    int number = CheckInt();
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "Введите значение base:\n";;
                    double base;
                    cin >> base;
                    cout << "Введите значение exponent:\n";
                    int exponent = CheckInt();
                    cout << base << "^" << exponent << " = " << GetPower(base, exponent) << endl;
                }
                cout << endl;
                system("pause");
                break;
            }
            case 6:
            {
                cout << "Введите количество операций:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "Введите количество операций:\n";
                    int number = CheckInt();
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "Введите значение base:\n";;
                    double base;
                    cin >> base;
                    cout << "Введите значение exponent:\n";
                    int exponent = CheckInt();
                    cout << "Использована функция DemoGetPower().\n";
                    DemoGetPower(base, exponent);
                }
                cout << endl;
                system("pause");
                break;
            }
            case 7:
            {
                cout << "Введите количество операций:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "Введите количество операций:\n";
                    int number = CheckInt();
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "Введите значение:\n";
                    int value = CheckInt();
                    cout << "Значение " << value;
                    RoundToTens(value);
                    cout << " округленно до " << value << ";\n";
                }
                cout << endl;
                system("pause");
                break;
            }
            case 8:
            {
                cout << "При каждом запуске программы адреса переменных будут разные.\n";
                int a = 5;
                int b = 4;
                cout << "Адрес переменной a: " << &a << endl;
                cout << "Адрес переменной b: " << &b << endl;
                double c = 13.5;
                cout << "Адрес переменной c: " << &c << endl;
                bool d = true;
                cout << "Адрес переменной d: " << &d << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 9:
            {
                int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };
                cout << "Размер одной ячейки типа int: " << sizeof(int) << endl;
                for (int i = 0; i < 10; i++)
                {
                    cout << "Адрес переменной a[" << i << "]: " << &a[i] << endl;
                }
                cout << endl;
                cout << "Размер одной ячейки типа double: " << sizeof(double) << endl;
                double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2
                };
                for (int i = 0; i < 10; i++)
                {
                    cout << "Адрес переменной b[" << i << "]: " << &b[i] << endl;
                }
                cout << endl;
                system("pause");
                break;
            }
            case 10:
            {
                cout << "Свяжем адреса переменных a и b.\n";
                int a = 5;
                int& b = a;
                cout << "Адрес переменной a: " << &a << endl;
                cout << "Адрес переменной b: " << &b << endl;
                cout << endl;
                cout << "\nПрисвоем переменной b значение 7.\n";
                b = 7;
                cout << "Значение переменной a: " << a << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 11:
            {
                double a = 5.0;
                cout << "Адрес а в функции main(): " << &a << endl;
                cout << "Значение a в функции main(): " << a << endl;
                cout << endl;
                Foo(a);
                cout << endl;
                cout << "Значение a в функции main() после";
                cout << " функции Foo(a): " << a << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 12:
            {
                double a = 5.0;
                cout << "Адрес а в функции main(): " << &a << endl;
                cout << "Значение a в функции main(): " << a << endl;
                cout << endl;
                SecondFoo(a);
                cout << endl;
                cout << "Значение a в функции main() после";
                cout << "функции SecondFoo(a) : " << a << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 13:
            {
                int a = 5;
                int* pointer = &a;
                cout << "Адрес переменной a: " << &a << endl;
                cout << "Адрес в pointer: " << pointer << endl;
                cout << "Адрес переменной pointer: " << &pointer << endl;
                cout << endl;
                cout << "*pointer = 7;" << endl;
                *pointer = 7;
                cout << "Значение в переменной a: " << a << endl;
                cout << "Значение из адреса pointer: " << *pointer << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 14:
            {
                double value = 5.0;
                double* pointer = &value;
                cout << "Адрес переменной value в main(): " << &value << endl;
                cout << "Адрес в переменной pointer в main(): " << pointer << endl;
                cout << "Адрес переменной pointer в main(): " << &pointer << endl;
                cout << "Значение переменной a в main(): " << value << endl;
                cout << endl;
                ThirdFoo(pointer);
                cout << endl;
                cout << "Значение переменной a в main(): " << value << endl;
                cout << endl;
                system("pause");
                break;
            }
            case 15:
            {
                double* doubleArray = new double[8];
                cout << "Массив вещественных чисел:\n";
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
                cout << "Массив булевых переменных:\n";
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
                cout << "Введите ёмкость символьного массива:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "Введите ёмкость символьного массива:\n";
                    int number = CheckInt();
                }
                char* charArray = new char[number];
                for (int i = 0; i < number; i++)
                {
                    cout << "Введите значение для charArray[" << i << "] = ";
                    cin >> charArray[i];
                    cout << endl;
                }
                cout << "Введите значения массива charArray:\n";
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
                cout << "Массив вещественных чисел:\n";
                for (int i = 0; i < 10; i++)
                {
                    doubleArray[i] = drandom(-150,150);
                    cout << doubleArray[i] << " ";
                }
                DoubleSorting(doubleArray);
                cout << "\nОтсортированный вариант:\n";
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
                        cout << "Индекс искомого элемента: " << i << endl;
                    }
                }
                if (!isTrue)
                {
                    cout << "Индекс элемента не был найден.\n";
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
                cout << "Введите количество операций:\n";
                int number = CheckInt();
                while (number < 0)
                {
                    cout << "Введите количество операций:\n";
                    int number = CheckInt();
                }
                int** randArray = new int* [number];
                int* capacity = new int[number];//Запомнить ёмкость динамического массива
                for (int i = 0; i < number; i++)
                {
                    cout << "\nВведите ёмкость массива №" << i + 1 << ":\n";
                    capacity[i] = CheckInt();
                    while (capacity < 0)
                    {
                        cout << "\nВведите ёмкость массива №" << i + 1 << ":\n";
                        capacity[i] = CheckInt();
                    }
                    randArray[i] = MakeRandomArray(capacity[i]);
                }
                for (int i = 0; i < number; i++)
                {
                    cout << "Массив №" << i+1 << endl;
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