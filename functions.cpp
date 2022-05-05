#include <iostream>
#include <Windows.h>
#include <exception>
#include <cstdlib>
#include "functions.h"
#include "ContactNode.h"
#include "DisciplineNode.h"
#include "MovieNode.h"
#include "FlightNode.h"
#include "RectangleNode.h"
#include "SongNode.h"
#include "TimeNode.h"
#include "CircleNode.h"
#include "EnumsNode.h"
#include "MovieNodeWithGenre.h"

using namespace std;

// Сортирует массив вещественных чисел
void Sort(double* values, int count)
{
    double swap;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (values[i] < values[j])
            {
                swap = values[i];
                values[i] = values[j];
                values[j] = swap;
            }
        }
    }
};

// Демонстрирует работу сортировки
void DemoSort()
{
    int count = 0;
    do
    {
        cout << "\nВведите ёмкость массива для демонстрации\n";
        count = CheckInt();
    } while (count == 0);
    try
    {
        double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
        for (int i = 0; i < count; i++)
        {
            cout << values[i] << " ";
        }
        cout << endl;
        Sort(values, count);
        for (int i = 0; i < count; i++)
        {
            cout << values[i] << " ";
        }
        delete[] values;
    }
    catch (const std::exception & ex)
    {
        cout << "\nНайдено исключение!(" << ex.what() << ")\n";
    }
};

void WrongPointers()
{
    FlightNode Flight;
    MovieNode Movie;
    FlightNode* flight = &Flight;
    MovieNode* movie = &Movie;
    flight = CinFlightNode();
    movie = CinMovieNode();
    cout << endl << endl;
    cout << "Адрес Flight: " << &Flight;
    cout << endl;
    cout << "Адрес flight: " << flight;
    cout << endl;
    cout << "Адрес Movie: " << &Movie;
    cout << endl;
    cout << "Адрес movie: " << movie;
    cout << endl;
    //Для проверки нужно убрать "/**/"! Возникнет ошибка, т.к. типы данных разные
    /*
    movie = flight;
    flight = movie;
    */
};

void DemoEnums()
{
    Цвет color = Оранжевый;
    День_Недели day = Понедельник;
    Жанр genre = Ужасы;
    Форма_Обучения student = Очное;
    Производитель_Смартфонов phone = Huawei;
    Время_Года season = Весна;
    //=======================================
    Цвет colors[6] = { Красный,Синий,Фиолетовый,Желтый,Оранжевый,Голубой };
    День_Недели days[6] = { Вторник,Четверг,Пятница,Понедельник,Среда,Воскресенье };
    Жанр genres[6] = { Ужасы,Боевик,Блокбастер,Комедия,Драма,Триллер };
    Форма_Обучения students[6] = { Очное,Заочное,Очное,Дистанционное,Заочное,Очное };
    Производитель_Смартфонов phones[6] = { Apple,Huawei,Samsung,Huawei,LG, Lenovo};
    Время_Года seasons[6] = {Зима, Лето, Осень,Зима,Весна,Весна};
    for (int i = 0; i < 6; i++)
    {
        WriteColor(colors[i]);
    }
};

void WriteColor(Цвет colors)
{
    switch (colors)
    {
        case Красный:
        {
            cout << "Выбран Красный цвет.\n";
            break;
        }
        case Оранжевый:
        {
            cout << "Выбран Оранжевый цвет\n";
            break;
        }
        case Желтый:
        {
            cout << "Выбран Желтый цвет\n";
            break;
        }
        case Зеленый:
        {
            cout << "Выбран Зеленый цвет\n";
            break;
        }
        case Голубой:
        {
            cout << "Выбран Голубой цвет\n";
            break;
        }
        case Синий:
        {
            cout << "Выбран Синий цвет\n";
            break;
        }
        case Фиолетовый:
        {
            cout << "Выбран Фиолетовый цвет\n";
            break; 
        }
    }
};

Цвет ReadColor()
{
    cout << "Введите число от 0 до 6 (0 – красный, 1 – оранжевый, 2 – желтый, 3 – зеленый, 4 – голубой, 5 – синий, 6 – фиолетовый):\n";
    int temp;
    do
    {
        temp = CheckInt();
    } while ((temp > 6) || (temp < 0));
    switch (temp)
    {
        case Красный:
        {
            return Красный;
        }
        case Оранжевый:
        {
            return Оранжевый;
        }
        case Желтый:
        {
            return Желтый;
        }
        case Зеленый:
        {
            return Зеленый;
        }
        case Голубой:
        {
            return Голубой;
        }
        case Синий:
        {
            return Синий;
        }
        case Фиолетовый:
        {
            return Фиолетовый;
        }
    }
};

int CountRed(Цвет* colors, int count)
{
    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (colors[i] == Красный)
        {
            temp++;
        }
    }
    return temp;
};

int* CountColors(Цвет* colors, int count)
{
    int* temp = new int[Фиолетовый+1];
    for (int i = 0; i < Фиолетовый + 1; i++)
    {
        temp[i] = 0;
    }
    for (int i = 0; i < count; i++)
    {
        temp[colors[i]]++;
    }
    return temp;
};