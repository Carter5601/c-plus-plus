#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

#include "Playlist.h"
#include "Song.h"

Playlist::Playlist(string playlistName) {
    this->playlistName = playlistName;
}

Playlist::Playlist() {
    playlistName = "none";
}

void Playlist::PrintPlaylist() {
    cout << playlistName << endl;
}

void Playlist::AddSongToPlaylist(Song* newSong) {
    songForPlaylist.push_back(newSong);
}

void Playlist::RemoveByName(string songName) {
    for (int i = 0; i < songForPlaylist.size(); ++i) {
        if (songForPlaylist.at(i)->GetName() == songName) {
            songForPlaylist.erase(songForPlaylist.begin() + i);
        }
    }
}

void Playlist::PlayPlaylist() {
    for (int i = 0; i < songForPlaylist.size(); i++) {

        songForPlaylist.at(i)->PrintSongLine();
        songForPlaylist.at(i)->IncrementPlayCount();
    }
}

void Playlist::ListSongsInPlaylist() {
    for (int i = 0; i < songForPlaylist.size(); ++i) {
        cout << i << ": ";
        songForPlaylist.at(i)->PrintNameOfSong();
        cout << endl;
    }
}

void Playlist::RemoveByIndex(int indexToErase) {
    songForPlaylist.erase(songForPlaylist.begin() + indexToErase);
}
