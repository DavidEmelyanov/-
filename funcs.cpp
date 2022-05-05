#include <iostream>
#include "funcs.h"
#include <Windows.h>

using namespace std;

double drandom(double min, double max)
{
    return (double)(rand()) / RAND_MAX * (max - min) + min;
}

void Breakpoints()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 1000; i++)
    {
        sum += add * i; // Поставьте условную точку останова здесь 
        if (i % 3 == 0)
        {
            add *= 1.1;
        }
        else
        {
            add /= 3.0;
        }
    }    cout << "Сумма: " << sum << endl;
}
//Задание для breakpoint'ов.
/*
        sum	0.00000000000000000	double
        sum	0.00000000000000000	double
        sum	1.1000000000000001	double
        sum	1.8333333333333335	double
        sum	2.2000000000000002	double
        sum	2.7377777777777781	double
        sum	2.9618518518518524	double
        sum	3.0514814814814821	double
        sum	3.1665061728395067	double
        sum	3.2103251028806592	double
        sum	3.2267572016460915	double

        Для i==777:
        add	3.7316036671328125e-237	double
        i	777	int
        sum	3.2624579394327844	double


*/

void RoundToTens(int& value)
{
    if (value % 10 < 5)
    {
        value = value / 10;
        value = value * 10;
    }
    else
    {
        value = value / 10;
        value++;
        value = value * 10;
    }
}

double GetPower(double base, int exponent)
{
    double temp = 1;
    if (exponent == 0)
    {
        return temp;
    }
    for (int i = 1; i <= exponent; i++)
    {
        temp = temp * base;
    }
    return temp;
}

void DemoGetPower(double base, int exponent)
{
    cout << base << "^" << exponent << " = " << GetPower(base, exponent);
}

void Foo(double a)
{
    cout << "Адрес a в Foo(): " << &a << endl;
    cout << "Значение a в Foo(): " << a << endl;
    a = 15.0;
    cout << "Новое значение a в Foo(): " << a << endl;
}

void SecondFoo(double& a)
{
    cout << "Адрес a в SecondFoo(): " << &a << endl;
    cout << "Значение a в SecondFoo(): " << a << endl;
    a = 15.0;
    cout << "Новое значение a в SecondFoo(): " << a << endl;
}

void ThirdFoo(double* a)
{
    cout << "Адрес в pointer: " << a << endl;
    cout << "Адрес pointer: " << &a << endl;
    cout << "Значение в адресе pointer: " << *a << endl;
    *a = 15.0;
    cout << "Новое значение в адресе  pointer: " << *a << endl;
}

void DoubleSorting(double* arr)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 9; j++)
        {
            if (arr[j+1] < arr[i])
            {
                double temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int* MakeRandomArray(int arraySize)
{
    int* arr = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}