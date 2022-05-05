#pragma once
#include "SongNode3.h"
#include <iostream>
#include <string>

using namespace std;

class AlbumNode
{
private:
	string name;
	int year;
	int countSongs;
	SongNode3** Song;
public:
	void setName();
	void setYear();
	string getName();
	int getCountSongs();
	int getYear();
	SongNode3* getSongByID(int id);
	void setSongByID(SongNode3* Song, int id);
	void showNode();
	AlbumNode();
	AlbumNode(int countSongs);
	friend SongNode3* FindSong(AlbumNode* album, string songTitle);
	friend AlbumNode* FindAlbum(AlbumNode* album, SongNode3* song);
};

SongNode3* FindSong(AlbumNode* album, string songTitle);
AlbumNode* FindAlbum(AlbumNode* album, SongNode3* song);
bool isRightSong(SongNode3* song1, SongNode3* song2);