#include "Playlist.hpp"
#include <iostream>

using namespace std;

Playlist::Playlist(Song song1)
{
    cout << "Song1 info " << &song1 << endl;
    song1.describe();
};

void Playlist::createNode(Song song)
{
    
}