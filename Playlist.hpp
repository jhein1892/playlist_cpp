#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.hpp"
#include "Node.hpp"
#include <map>

class Playlist
{
    public: 
        Playlist();
        void addSong(Song song);
        void describePlaylist();
    
    private:
        Song* prevSong;
        Song* startingSong = nullptr;
        

    // So for my constructor, for each song included in constructor, I want to create another node. 
    // Each node is going to need to have a song*, nextsong*, prevsong*
    // I'm going to need to keep track of my current node somehow
    // I'm going to need to store the song* to the first node so that I can reference it later.
};

#endif

