#ifndef UNTITLED15_PLAYLIST_H
#define UNTITLED15_PLAYLIST_H

#include "Song.h"

class Playlist {
public:
    Playlist(string playlistName);
    void PrintPlaylist();
    Playlist();
    void AddSongToPlaylist(Song* newSong);
    void RemoveByName(string songName);
    void PlayPlaylist();
    void ListSongsInPlaylist();
    void RemoveByIndex(int indexToErase);

private:
    string playlistName;
    vector<Song*> songForPlaylist;
};

#endif //UNTITLED15_SONG_H
