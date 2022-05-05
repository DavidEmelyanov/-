#pragma once
#include <string>

using namespace std;

struct MovieNode
{
	string title;
	int time;
	int year;
	string genre;
	double rating = -1;
};
// Структура Фильм
// Начало описания структуры
// Строковое поле Название
// Целочисленное поле Продолжительность в минутах
// Целочисленное поле Год выпуска
// Строковое поле Жанр
// Вещественное поле Рейтинг
// Конец описания структуры
void DemoMovie();
void DemoMovieAdress();
void ShowMovieNode(MovieNode* temp);
MovieNode* CinMovieNode();
MovieNode* MakeMovie(const char* title, int time, int year, const char* genre, double rating);
MovieNode* CopyMovie(MovieNode* Movie);