#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

#include "Song.h"

void Song::IncrementPlayCount() {
    ++playCount;
}


void Song::PrintSongs() {
    cout << songName << ": \"" << firstLine << "\", " << playCount << " play(s)." << endl;
}

void Song::PrintNameOfSong() {
    cout << songName << endl;
}


void Song::PrintSongLine() {
    cout << firstLine << endl;
}

Song::Song(string songName, string firstLine, int playCount) {
    this->songName = songName;
    this->firstLine = firstLine;
    this->playCount = playCount;
}

Song::Song() {
    songName = "none";
    firstLine = "none";
    playCount = 0;
}

string Song::GetName() {
    return songName;
}



