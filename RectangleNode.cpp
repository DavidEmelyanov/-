#pragma once
#include <iostream>
#include "RectangleNode.h"
#include "functions.h"

using namespace std;


void ShowRectangleNode(RectangleNode* temp)
{
    cout << endl;
    cout << "����: " << temp->color << "; ������ ��������������: " << temp->length << "x" << temp->width << endl;
    cout << endl;
};

void DemoRectangle()
{
    RectangleNode* temp = new RectangleNode;
    temp->color = "�������";
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
    cout << "������� ����: ";
    cin >> temp->color;
    cout << endl;
    cout << "������� �����: ";
    temp->length = CheckInt();
    cout << endl;
    cout << "������� ������: ";
    temp->width = CheckInt();
    cout << endl;
    return temp;
};

void DemoRectangleAdress()
{
    RectangleNode temp;
    temp.color = "�������";
    do {
        temp.length = rand() % 20;
        temp.width = rand() % 20;
    } while ((temp.width == 0) || (temp.length == 0));
    cout << "���������� temp:\n";
    ShowRectangleNode(&temp);
    cout << endl << endl;
    RectangleNode* NewTemp = &temp;
    cout << "����� NewTemp: " << NewTemp;
    cout << endl;
    cout << "����� temp: " << &temp;
    cout << endl << endl << "���������� NewTemp:\n";
    ShowRectangleNode(NewTemp);
    cout << endl << endl;
    NewTemp->color = "������";
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
    cout << "������������� ����� ������ " << rectangle.length << "x" << rectangle.width << endl;
    cout << endl;
};

void ReadRectangle(RectangleNode& rectangle)
{
    cout << "������� ����� ��������������: ";
    rectangle.length = CheckInt();
    cout << endl;
    cout << "������� ������ ��������������: ";
    rectangle.width = CheckInt();
    cout << endl;
};

void DemoReadAndWriteRectangles()
{
    int count;
    do
    {
        cout << "������� ����������: ";
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
            cout << "������������� � ������������ ������ ����� ������ " << max << "x" << rectangles[i].width;
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
            cout << "������������� � ������������ �������� ����� ������ " << rectangles[i].length << "x" << rectangles[i].width;
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