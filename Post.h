#pragma once
#include <iostream>
#include <string>

using namespace std;
//////////////////////// Post - ���� � ����� ������������ � ������� ���������
class Post
{
	string _title;
	string _text;
public:
	void SetTitle(string title);
	void SetText(string text);
	string GetTitle();
	string GetText();
	Post(string title, string text);
};