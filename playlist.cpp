#include <iostream>

// I'll use OOP for this. I want to create an class for Song
    // Should have for data:
    // 1) Title
    // 2) Artist
    // 3) Duration

    // Should have for functions:
    // Describe song
    // Edit song
    // Remove Song


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


    return 0;
}