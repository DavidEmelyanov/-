#pragma once
#include <iostream>
#include "RectangleNode.h"
#include "functions.h"

using namespace std;


void ShowRectangleNode(RectangleNode* temp)
{
    cout << endl;
    cout << "Цвет: " << temp->color << "; Размер прямоугольника: " << temp->length << "x" << temp->width << endl;
    cout << endl;
};

void DemoRectangle()
{
    RectangleNode* temp = new RectangleNode;
    temp->color = "Красный";
    do {
        temp->length = rand() % 20;
        temp->width = rand() % 20;
    } while ((temp->width == 0) || (temp->length == 0));
    ShowRectangleNode(temp);
    delete temp;
};

RectangleNode* CinRectangleNode()
{
    RectangleNode* temp = new RectangleNode;
    cout << "Введите цвет: ";
    cin >> temp->color;
    cout << endl;
    cout << "Введите длину: ";
    temp->length = CheckInt();
    cout << endl;
    cout << "Введите ширину: ";
    temp->width = CheckInt();
    cout << endl;
    return temp;
};

void DemoRectangleAdress()
{
    RectangleNode temp;
    temp.color = "Красный";
    do {
        temp.length = rand() % 20;
        temp.width = rand() % 20;
    } while ((temp.width == 0) || (temp.length == 0));
    cout << "Содержимое temp:\n";
    ShowRectangleNode(&temp);
    cout << endl << endl;
    RectangleNode* NewTemp = &temp;
    cout << "Адрес NewTemp: " << NewTemp;
    cout << endl;
    cout << "Адрес temp: " << &temp;
    cout << endl << endl << "Содержимое NewTemp:\n";
    ShowRectangleNode(NewTemp);
    cout << endl << endl;
    NewTemp->color = "Желтый";
    do {
        NewTemp->length = rand() % 20;
        NewTemp->width = rand() % 20;
    } while ((NewTemp->width == 0) || (NewTemp->length == 0));
    ShowRectangleNode(&temp);
    cout << endl;
    cout << "Temp: " << &temp << " ;NewTemp: " << NewTemp;
    cout << endl;
};

void WriteRectangle(RectangleNode& rectangle)
{
    cout << endl;
    cout << "Прямоугольник имеет размер " << rectangle.length << "x" << rectangle.width << endl;
    cout << endl;
};

void ReadRectangle(RectangleNode& rectangle)
{
    cout << "Введите длину прямоугольника: ";
    rectangle.length = CheckInt();
    cout << endl;
    cout << "Введите ширину прямоугольника: ";
    rectangle.width = CheckInt();
    cout << endl;
};

void DemoReadAndWriteRectangles()
{
    int count;
    do
    {
        cout << "Введите количество: ";
        count = CheckInt();
        cout << endl;
    } while (count <= 0);
    RectangleNode* rectangle = new RectangleNode[count];
    for (int i = 0; i < count; i++)
    {
        ReadRectangle(rectangle[i]);
    }
    for (int i = 0; i < count; i++)
    {
        WriteRectangle(rectangle[i]);
    }
};

void Exchange(RectangleNode& rectangle1, RectangleNode& rectangle2)
{
    RectangleNode temp;
    temp.length = rectangle1.length;
    temp.width = rectangle1.width;
    rectangle1.length = rectangle2.length;
    rectangle1.width = rectangle2.width;
    rectangle2.length = temp.length;
    rectangle2.width = temp.width;
};

void FindRectangle(RectangleNode* rectangles, int count)
{
    int max = rectangles[0].length;
    for (int i = 0; i < count; i++)
    {
        if (max < rectangles[i].length)
        {
            max = rectangles[i].length;
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (rectangles[i].length == max)
        {
            cout << "Прямоугольник с максимальной длиной имеет размер " << max << "x" << rectangles[i].width;
            break;
        }
    }
    cout << endl;
};

void FindMaxRectangle(RectangleNode* rectangles, int count)
{
    int max = rectangles[0].length * rectangles[0].width;
    for (int i = 0; i < count; i++)
    {
        if (max < rectangles[i].length * rectangles[i].width)
        {
            max = rectangles[i].length * rectangles[i].width;
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (rectangles[i].length * rectangles[i].width == max)
        {
            cout << "Прямоугольник с максимальной площадью имеет размер " << rectangles[i].length << "x" << rectangles[i].width;
            break;
        }
    }
    cout << endl;
};

RectangleNode* MakeRectangle(const char* color, int length, int width)
{
    RectangleNode* temp = new RectangleNode;
    temp->color = color;
    temp->length = length;
    temp->width = width;
    return temp;
};

RectangleNode* CopyRectangle(RectangleNode* Rectangle)
{
    RectangleNode* temp = new RectangleNode;
    temp->color = Rectangle->color;
    temp->length = Rectangle->length;
    temp->width = Rectangle->width;
    return temp;
};