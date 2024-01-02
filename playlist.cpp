#include "Playlist.hpp"
#include <iostream>

using namespace std;

Playlist::Playlist(Song song1)
{
    cout << "Song1 info " << &song1 << endl;
    createNode(song1);
    // song1.describe();
};

void Playlist::createNode(Song song)
{
    std::cout << "IN CREATE NODE ---" << endl;
    std::cout << &song << endl;
    // Node CurrNode = Node(song);
    // Node CurrNode = Node(song, nullptr, nullptr);

    // playlist_map['start'] = CurrNode;
}

void Playlist::describePlaylist()
{
    // Song currSong = playlist_map['start'];

    // while(currSong)
    // {
    //     cout << currSong << endl;

    //     currSong = currSong['next']; 
    // }

    // cout << "Playlist done" << endl;
}
