#include "Playlist.hpp"
#include <iostream>

using namespace std;

Playlist::Playlist()
{
    cout << "Please Add your first song" << endl;
};

void Playlist::addSong(Song song)
{
    cout << &song << endl;
    cout << startingSong << endl;
    if(!startingSong)
    {
        std::cout << "seems to be first Song!" << std::endl;
        startingSong = &song;
    }
    else
    {
        song.prev = prevSong;
        *prevSong -> next = song;
        std::cout << "The first Song is: " << startingSong << std::endl;
    }

}



void Playlist::describePlaylist()
{

}
