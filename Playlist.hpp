#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.hpp"
#include <map>

class Playlist
{
    public: 
        Playlist();
        void addSong(Song song);
        void describePlaylist();
        void cyclePlaylist();
    
    private:
        Song* prevSong = nullptr;
        Song* startingSong = nullptr;
        void deleteSong(Song* song);
        
};

#endif

