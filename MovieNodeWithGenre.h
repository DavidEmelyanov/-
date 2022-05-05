#pragma once
#include <string>
#include "EnumsNode.h"

using namespace std;

struct MovieNodeWithGenre
{
	string title;
	int time;
	int year;
	���� genre;
	double rating = -1;
};
// ��������� �����
// ������ �������� ���������
// ��������� ���� ��������
// ������������� ���� ����������������� � �������
// ������������� ���� ��� �������
// ��������� ���� ����
// ������������ ���� �������
// ����� �������� ���������
void DemoMovieWithGenre();
MovieNodeWithGenre* CopyMovieWithGenre(MovieNode* Movie);
MovieNodeWithGenre* MakeMovieWithGenre(const char* title, int time, int year, ���� genre, double rating);
int CountMoviesByGenre(MovieNodeWithGenre* movies, int count, ���� findGenre);
MovieNodeWithGenre* FindBestGenreMovie(MovieNodeWithGenre** movies, int count, ���� findGenre);
void CinMovieNodeWithGenre(MovieNodeWithGenre Movies);
MovieNodeWithGenre* CinMovieNodeWithGenrePointer();
void DemoMovieWithGenreForCount();
void ShowMovieNodeWithGenre(MovieNodeWithGenre* temp);