#pragma once
#include <iostream>
#include <Windows.h>
#include "CheckInt.h"

using namespace std;


int CheckInt()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int element;
    bool correct = false;
    while (!correct)
    {
        cin >> element;
        if (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n');
            {
                cout << "Введите допустимое значение" << endl;
                correct = false;
            }
        }
        else
        {
            return element;
        }
    }
}

double RandDouble()
{
    double temp = (double)rand() / ((double)rand() + 0.1);
    return temp+ rand() % 3000;
};

string setString()
{
    string temp;
    string tmp;
    cin >> temp;
    getline(cin, tmp);
    cout << endl;
    return temp + tmp;
};

double CheckDouble()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double element;
    bool correct = false;
    while (!correct)
    {
        cin >> element;
        if (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n');
            {
                cout << "Введите допустимое значение" << endl;
                correct = false;
            }
        }
        else
        {
            return element;
        }
    }
}
