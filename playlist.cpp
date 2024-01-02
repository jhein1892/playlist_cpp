#include "Playlist.hpp"
#include <iostream>

using namespace std;

Playlist::Playlist()
{
    cout << "Please Add your first song" << endl;
};

void Playlist::addSong(Song song)
{
    if(!startingSong)
    {   
        startingSong = &song;
        prevSong = &song;
    }
    else
    {
        song.prev = prevSong;
        prevSong->next= &song;
        prevSong = &song;
    }

}

void Playlist::describePlaylist()
{
    Song* currSong = startingSong;
    std::cout << "DESCRIBE ---" << std::endl;
    while(currSong)
    {
        currSong->describe();
        currSong = currSong->next;
    }
}
