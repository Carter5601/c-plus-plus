#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Song.h"
#include "Playlist.h"

std::string GetUserString(const std::string& prompt);

void AddSongsMenuOption(vector<Song*> &songLibrary);
void ListSongsMenuOption(vector<Song*> &songLibrary);
void AddPlaylistMenuOption(vector<Playlist*> &playlistLibrary);
void AddSongToPlaylistMenuOption(vector<Playlist*> &playlistLibrary, vector<Song*> &songLibrary);
void ListPlaylistsMenuOption(vector<Playlist*> &playlistLibrary);
void PlayPlaylistMenuOption(vector<Playlist*> &playlistLibrary);
void RemovePlaylistMenuOption(vector<Playlist*> &playlistLibrary);
void RemoveSongFromPlaylistMenuOption(vector<Playlist*> &playlistLibrary, vector<Song*> &songLibrary);
void RemoveSongFromLibraryMenuOption(vector<Song*> &songLibrary, vector<Playlist*> &playlistLibrary);
void OptionsMenuOption();
void QuitMenuOption(vector<Song*> &songLibrary, vector<Playlist*> &playlistLibrary);



int main() {
    std::cout << "Welcome to the Firstline Player!  Enter options to see menu options." << std::endl << std::endl;

    vector<Song*> songLibrary;
    vector<Playlist*> playlistLibrary;

    std::string userMenuChoice = "none";
    bool continueMenuLoop = true;

    while (continueMenuLoop) {
        userMenuChoice = GetUserString("Enter your selection now: ");

        if (userMenuChoice == "add") {
            AddSongsMenuOption(songLibrary);
        }
        else if (userMenuChoice == "list") {
            ListSongsMenuOption(songLibrary);
        }
        else if (userMenuChoice == "addp") {
            AddPlaylistMenuOption(playlistLibrary);
        }
        else if (userMenuChoice == "addsp") {
            AddSongToPlaylistMenuOption(playlistLibrary, songLibrary);
        }
        else if (userMenuChoice == "listp") {
            ListPlaylistsMenuOption(playlistLibrary);
        }
        else if (userMenuChoice == "play") {
            PlayPlaylistMenuOption(playlistLibrary);
        }
        else if (userMenuChoice == "remp") {
            RemovePlaylistMenuOption(playlistLibrary);
        }
        else if (userMenuChoice == "remsp") {
            RemoveSongFromPlaylistMenuOption(playlistLibrary, songLibrary);
        }
        else if (userMenuChoice == "remsl") {
            RemoveSongFromLibraryMenuOption(songLibrary, playlistLibrary);
        }
        else if (userMenuChoice == "options") {
            OptionsMenuOption();
        }
        else if (userMenuChoice == "quit") {
            QuitMenuOption(songLibrary, playlistLibrary);
            continueMenuLoop = false;
        }
        else {
            OptionsMenuOption();
        }
    }

    return 0;
}

std::string GetUserString(const std::string& prompt) {
    std::string userAnswer = "none";

    std::cout << prompt;
    std::getline(std::cin, userAnswer);
    std::cout << std::endl;
    return userAnswer;
}

int GetUserInt(const std::string& prompt) {
    int userAnswer = 0;

    std::cout << prompt;
    std::cin >> userAnswer;
    std::cin.ignore();
    std::cout << std::endl;
    return userAnswer;
}

void AddSongsMenuOption(vector<Song*> &songLibrary) {
    const std::string DONE_KEYWORD = "DONE";
    std::cout << "Enter songs' names and first lines"
              << " (type \"" << DONE_KEYWORD << "\" when done):" << std::endl;

    std::string songName = "none";
    std::string firstLine = "none";

    songName = GetUserString("Song Name: ");
    while (songName != DONE_KEYWORD) {
        firstLine = GetUserString("Song's first line: ");

        Song *newSong = new Song(songName, firstLine, 0);
        songLibrary.push_back(newSong);

        songName = GetUserString("Song Name: ");
    }
}

void ListSongsMenuOption(vector<Song*> &songLibrary) {
    for (int i = 0; i < songLibrary.size(); i++) {
        songLibrary.at(i)->PrintSongs();
    }
}

void AddPlaylistMenuOption(vector<Playlist*> &playlistLibrary) {
    string playlistName = "none";

    playlistName = GetUserString("Playlist Name: ");
    Playlist* newPlaylist = new Playlist(playlistName);
    playlistLibrary.push_back(newPlaylist);
}

void AddSongToPlaylistMenuOption(vector<Playlist*> &playlistLibrary, vector<Song*> &songLibrary) {
    int userInputPlaylist;
    int userInputSong;

    ListPlaylistsMenuOption(playlistLibrary);
    userInputPlaylist = GetUserInt("Pick a playlist index number: ");
    for (int i = 0; i < songLibrary.size(); ++i) {
        cout << i << ": ";
        songLibrary.at(i)->PrintNameOfSong();
        cout << endl;
    }
    userInputSong = GetUserInt("Pick a song index number: ");

    playlistLibrary.at(userInputPlaylist)->AddSongToPlaylist(songLibrary.at(userInputSong));
}

void ListPlaylistsMenuOption(vector<Playlist*> &playlistLibrary) {
    for (int i = 0; i < playlistLibrary.size(); ++i) {
        cout << i << ": ";
        playlistLibrary.at(i)->PrintPlaylist();
        cout << endl;
    }
}

void PlayPlaylistMenuOption(vector<Playlist*> &playlistLibrary) {
    int userInputPlaylist;

    ListPlaylistsMenuOption(playlistLibrary);

    userInputPlaylist = GetUserInt("Pick a playlist index number: ");

    cout << "Playing songs from playlist: ";
    for (int i = 0; i < playlistLibrary.size(); i++) {
        if (i == userInputPlaylist) {
            playlistLibrary.at(i)->PrintPlaylist();
        }
    }
    cout << endl;

    playlistLibrary.at(userInputPlaylist)->PlayPlaylist();
}

void RemovePlaylistMenuOption(vector<Playlist*> &playlistLibrary) {
    int userInputPlaylist;

    ListPlaylistsMenuOption(playlistLibrary);

    userInputPlaylist = GetUserInt("Pick a playlist index number to remove: ");

    for (int i = 0; i < playlistLibrary.size(); i++) {
        if (i == userInputPlaylist) {
            playlistLibrary.erase(playlistLibrary.begin() + i);
        }
    }
}

void RemoveSongFromPlaylistMenuOption(vector<Playlist*> &playlistLibrary, vector<Song*> &songLibrary) {
    int userInputPlaylist;
    int userInputSong;

    ListPlaylistsMenuOption(playlistLibrary);

    userInputPlaylist = GetUserInt("Pick a playlist index number: ");

    playlistLibrary.at(userInputPlaylist)->ListSongsInPlaylist();

    userInputSong = GetUserInt("Pick a song index number to remove: ");

    playlistLibrary.at(userInputPlaylist)->RemoveByIndex(userInputSong);

}

void RemoveSongFromLibraryMenuOption(vector<Song*> &songLibrary, vector<Playlist*> &playlistLibrary) {
    for (int i = 0; i < songLibrary.size(); ++i) {
        cout << i << ": ";
        songLibrary.at(i)->PrintNameOfSong();
        cout << endl;
    }

    int userInputSong;
    userInputSong = GetUserInt("Pick a song index number to remove: ");
    for (int i = 0; i < playlistLibrary.size(); ++i) {
        playlistLibrary.at(i)->RemoveByName(songLibrary.at(userInputSong)->GetName());
    }

    delete songLibrary.at(userInputSong); //freeing memory
    songLibrary.erase(songLibrary.begin() + userInputSong);
}

void OptionsMenuOption() {
    std::cout << "add      Adds a list of songs to the library" << std::endl
              << "list     Lists all the songs in the library" << std::endl
              << "addp     Adds a new playlist" << std::endl
              << "addsp    Adds a song to a playlist" << std::endl
              << "listp    Lists all the playlists" << std::endl
              << "play     Plays a playlist" << std::endl
              << "remp     Removes a playlist" << std::endl
              << "remsp    Removes a song from a playlist" << std::endl
              << "remsl    Removes a song from the library (and all playlists)" << std::endl
              << "options  Prints this options menu" << std::endl
              << "quit     Quits the program" << std::endl << std::endl;
}

void QuitMenuOption(vector<Song*> &songLibrary, vector<Playlist*> &playlistLibrary) {
    for (int i = 0; i < songLibrary.size(); ++i) {
        delete songLibrary.at(i); //freeing memory
    }
    for (int i = 0; i < playlistLibrary.size(); ++i) {
        delete playlistLibrary.at(i); //freeing memory
    }
    std::cout << "Goodbye!" << std::endl;
}



