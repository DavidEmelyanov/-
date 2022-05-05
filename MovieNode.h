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
// ��������� �����
// ������ �������� ���������
// ��������� ���� ��������
// ������������� ���� ����������������� � �������
// ������������� ���� ��� �������
// ��������� ���� ����
// ������������ ���� �������
// ����� �������� ���������
void DemoMovie();
void DemoMovieAdress();
void ShowMovieNode(MovieNode* temp);
MovieNode* CinMovieNode();
MovieNode* MakeMovie(const char* title, int time, int year, const char* genre, double rating);
MovieNode* CopyMovie(MovieNode* Movie);