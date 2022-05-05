#pragma once
#include <string>
#include "EnumsNode.h"

using namespace std;

struct MovieNodeWithGenre
{
	string title;
	int time;
	int year;
	Жанр genre;
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
void DemoMovieWithGenre();
MovieNodeWithGenre* CopyMovieWithGenre(MovieNode* Movie);
MovieNodeWithGenre* MakeMovieWithGenre(const char* title, int time, int year, Жанр genre, double rating);
int CountMoviesByGenre(MovieNodeWithGenre* movies, int count, Жанр findGenre);
MovieNodeWithGenre* FindBestGenreMovie(MovieNodeWithGenre** movies, int count, Жанр findGenre);
void CinMovieNodeWithGenre(MovieNodeWithGenre Movies);
MovieNodeWithGenre* CinMovieNodeWithGenrePointer();
void DemoMovieWithGenreForCount();
void ShowMovieNodeWithGenre(MovieNodeWithGenre* temp);