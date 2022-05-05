#pragma once
#include <string>

using namespace std;

struct RectangleNode
{
	int length;
	int width;
	string color;
};
// Структура Прямоугольник
// Начало описания структуры
// Вещественное поле Длина
// Вещественное поле Ширина
// Строковое поле Цвет
// Конец описания структуры

void DemoRectangle();
void ShowRectangleNode(RectangleNode* temp);
RectangleNode* CinRectangleNode();
void DemoRectangleAdress();
void WriteRectangle(RectangleNode& rectangle);
void ReadRectangle(RectangleNode& rectangle);
void DemoReadAndWriteRectangles();
void Exchange(RectangleNode& rectangle1, RectangleNode& rectangle2);
void FindRectangle(RectangleNode* rectangles, int count);
void FindMaxRectangle(RectangleNode* rectangles, int count);
RectangleNode* CopyRectangle(RectangleNode* Rectangle);
RectangleNode* MakeRectangle(const char* color, int length, int width);