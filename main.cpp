#include <iostream>
#include "Song.cpp"
#include "Playlist.cpp"

// Playlist is a linked list. The data, or node aspect of it will be a reference to a Song, the next will be the next location, and prev will be prev.
// Each Node of playlist should have
    // For Data:
        // Pointer* to Song
        // Pointer* to NextSong
        // Pointer* to PrevSong
    
    // Functions:
        // Describe Song
        // Remove Song
            // Make sure to update next's prev and prev's next
        // Add Song
            // Add new Song after current and before next

    

int main()
{
    Song song1 = Song("Title", "Artist", "2:30");
    Song song2 = Song("Title", "Artist", "2:30");
    Song song3 = Song("Title", "Artist", "2:30");
    Song song4 = Song("Title", "Artist", "2:30");

    Playlist newPlaylist = Playlist();
    newPlaylist.addSong(song1);
    newPlaylist.addSong(song2);
    

    return 0;
}