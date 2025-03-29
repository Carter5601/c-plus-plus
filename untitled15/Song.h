#ifndef UNTITLED15_SONG_H
#define UNTITLED15_SONG_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Song {
public:
    Song(string songName, string firstLine, int playCount);
    void PrintSongs();
    Song();
    void PrintSongLine();
    void PrintNameOfSong();
    string GetName();
    void IncrementPlayCount();

private:
    string songName;
    string firstLine;
    int playCount;



};

#endif //UNTITLED15_SONG_H
