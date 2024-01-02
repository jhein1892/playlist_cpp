#include "Song.hpp"
#include <iostream>

// Constructor for a new song
Song::Song(std::string title, std::string artist, std::string duration){
    song_map["title"] = title;
    song_map["artist"] = artist;
    song_map["duration"] = duration;
}

