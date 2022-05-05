#pragma once
#include <iostream>
#include "TimeNode.h"
#include "functions.h"

using namespace std;

void ShowTimeNode(TimeNode* temp)
{
    cout << endl;
    cout << "�����: " << temp->hours << " ����� " << temp->minutes << " ����� " << temp->seconds << " ������.";
    cout << endl;
};

void DemoTime()
{
    TimeNode* temp = new TimeNode;
    temp->hours = 22;
    temp->minutes = 53;
    temp->seconds = 33;
    ShowTimeNode(temp);
    delete temp;
};

TimeNode* CinTimeNode()
{
    TimeNode* temp = new TimeNode;
    do
    {
        cout << "������� ����: ";
        temp->hours = CheckInt();
        cout << endl;
    } while ((temp->hours > 23) || (temp->hours < 0));
    do
    {
        cout << "������� ������: ";
        temp->minutes = CheckInt();
        cout << endl;
    } while ((temp->minutes > 59) || (temp->minutes < 0));
    do
    {
        cout << "������� �������: ";
        temp->seconds = CheckInt();
        cout << endl;
    } while ((temp->seconds > 59) || (temp->seconds < 0));
    return temp;
};

void DemoTimeAdress()
{
    TimeNode temp;
    temp.hours = 15;
    temp.minutes = 25;
    temp.seconds = 24;
    cout << "temp �����: " << &temp << "\n";
    ShowTimeNode(&temp);
    TimeNode* NewTemp = &temp;
    cout << endl << endl << "NewTemp �����: " << NewTemp << "\n";
    ShowTimeNode(NewTemp);
    NewTemp->hours = 22;
    NewTemp->minutes = 53;
    NewTemp->seconds = 33;
    cout << endl << endl;
    ShowTimeNode(NewTemp);
};

TimeNode* MakeTime(int hours, int minutes, int seconds)
{
    TimeNode* temp = new TimeNode;
    temp->hours = hours;
    temp->minutes = minutes;
    temp->seconds = seconds;
    return temp;
};

TimeNode* CopyTime(TimeNode* time)
{
    TimeNode* temp = new TimeNode;
    temp->hours = time->hours;
    temp->minutes = time->minutes;
    temp->seconds = time->seconds;
    return temp;
};