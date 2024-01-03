#include <iostream>
#include "Song.cpp"
#include "Playlist.cpp"
    
int main()
{
    Song song1 = Song("1st", "Artist", "2:30");
    Song song2 = Song("2nd", "Artist", "2:30");
    Song song3 = Song("3rd", "Artist", "2:30");
    Song song4 = Song("4th", "Artist", "2:30");

    Playlist newPlaylist = Playlist();
    newPlaylist.addSong(song1);
    newPlaylist.addSong(song2);
    newPlaylist.addSong(song3);
    newPlaylist.addSong(song4);

    newPlaylist.cyclePlaylist();
    return 0;
}