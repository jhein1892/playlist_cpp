#include "Playlist.hpp"
#include <iostream>

using namespace std;

Playlist::Playlist()
{
    cout << "Please Add your first song" << endl;
};

// Adds song to end of playlist
void Playlist::addSong(Song song)
{
    if(!startingSong)
    {   
        startingSong = &song;
        prevSong = &song;
    }
    else
    {
        song.updatePrev(prevSong);
        prevSong->updateNext(&song);
        prevSong = &song;
    }

}

// Describes entire Playlist
void Playlist::describePlaylist()
{
    Song* currSong = startingSong;
    std::cout << "DESCRIBE ---" << std::endl;
    while(currSong)
    {
        currSong->describe();
        currSong = currSong->getNext();
    }
}

// Removes Song through reassigning prev and next songs
void Playlist::deleteSong(Song* song)
{
    Song* prevSong = song->getPrev();
    Song* nextSong = song->getNext();
    if(prevSong)
    {
        prevSong->updateNext(nextSong);
    }
    if(nextSong)
    {
        nextSong->updatePrev(prevSong);
    }
}

// Cycles through Playlist one at a time
void Playlist::cyclePlaylist()
{
    Song* currSong = startingSong;
    while(true && currSong)
    {
        currSong->describe();
        std::cout << "Next(n) / Prev(p) / Del(d) / Quit(q)" << std::endl;
        std::string input;
        std::getline(std::cin, input);
        if(input == "n")
        {
            currSong = currSong->getNext();
        }
        else if(input == "p")
        {
            currSong = currSong->getPrev();
        }
        else if (input == "d")
        {
            deleteSong(currSong);

            if(currSong->getPrev()) { currSong = currSong->getPrev(); } 
            else { currSong = currSong->getNext(); }
        }
        else if (input == "q")
        {
            break;
        }
        else
        {
            std::cout << "Sorry, unknown command" << std::endl;
        }

        if(!currSong)
        {
            std::cout << "You've reach an end to the playlist. Goodbye" << std::endl;
        }
    }
}
