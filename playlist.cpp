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
        cout << "seems to be first Song!" <<endl;
    }

}



void Playlist::describePlaylist()
{

}
