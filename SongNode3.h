#pragma once
#include <string>
#include <iostream>
#include "SongGenre.h"

using namespace std;

class SongNode3
{
private:
	string name;
	int year;
	int duration;
	SongGenre genre;
public:
	void setGenre();
	void setDuration();
	void setName();
	string getName();
	int getDuration();
	void setYear();
	int getYear();
	SongGenre getGenre();
	void showNode();
	SongNode3();
	void CopyNode(SongNode3* copyNode);
};