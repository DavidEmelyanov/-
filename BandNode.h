#pragma once
#include <string>
#include <iostream>
#include "CheckInt.h";
#include "AlbumNode.h"

using namespace std;

class BandNode
{
private:
	string name;
	string description;
	AlbumNode** album;
	int countAlbum;
public:
	string getDescription();
	void setDescription();
	string getName();
	void setName();
	int getCountAlbum();
	AlbumNode** getAlbums();
	BandNode();
	friend void DemoBand();
	SongNode3** GetAllSongs(int& allSongsCount);
	SongNode3** GetSongsByGenre(SongGenre findingGenre, int& allSongsCount);
};

void DemoBand();
string setString();