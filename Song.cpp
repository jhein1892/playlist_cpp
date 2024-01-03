#include "Song.hpp"
#include <iostream>

// Constructor for a new song
Song::Song(std::string t, std::string a, std::string d){
    title = t;
    artist = a;
    duration = d;
}

// Describes the Song
void Song::describe()
{
    std::cout << title << " by " << artist << " (" << duration << ")" << std::endl;
}

// Update Next Song
void Song::updateNext(Song* song) { next = song; }

// Update Previous Song
void Song::updatePrev(Song* song) { prev = song; }

// Return Next Song
Song* Song::getNext() { return next; }

// Return Previous Song
Song* Song::getPrev() { return prev; }