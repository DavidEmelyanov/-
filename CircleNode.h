#pragma once
#include <string>

using namespace std;

struct Circle // Структура круг
{
    double X; // X-координата центра круга
    double Y; // Y-координата центра круга
    double Radius; // Радиус
    string Color; // Цвет
};

void DemoCircleWithMakeAndCopy();
Circle* CopyCircle(Circle* circle);
Circle* MakeCircle(double X, double Y, double Radius, const char* Color);
void DemoCircle();