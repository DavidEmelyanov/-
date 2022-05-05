#pragma once
struct TimeNode
{
	int hours;
	int minutes;
	int seconds;
};
// Структура Время
// Начало описания структуры
// Целочисленное поле Часы (от 0 до 23)
// Целочисленное поле Минуты (от 0 до 60)
// Целочисленное поле Секунды (от 0 до 60)
// Конец описания структуры

void DemoTime();
void ShowTimeNode(TimeNode* temp);
TimeNode* CinTimeNode();
void DemoTimeAdress();
TimeNode* CopyTime(TimeNode* time);
TimeNode* MakeTime(int hours, int minutes, int seconds);