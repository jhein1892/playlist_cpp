#include "Song.hpp"
#include <iostream>

// Constructor for a new song
Song::Song(std::string title, std::string artist, std::string duration){
    song_map["title"] = title;
    song_map["artist"] = artist;
    song_map["duration"] = duration;
}

void Song::describe()
{
    std::cout << "Title: " << song_map["title"] << "\nArtist: " << song_map["artist"] << "\nDuration: " << song_map["duration"] << std::endl;
}

void Song::editSong()
{
    while(true)
   { 
    std::string input;
    std::cout << "What would you like to edit:\nArtist 'a', Title 't', Duration 'd' ('q' to exit): ";
    std::getline(std::cin, input);
    if(input == "a"){
        std::cout << "Please enter new Artist Name: ";

        std::string newArtist;
        std::getline(std::cin, newArtist);
        updateValue("artist", newArtist);
    } 
    else if (input == "t")
    {
        std::cout << "Please enter new Title: ";

        std::string newTitle;
        std::getline(std::cin, newTitle);
        updateValue("title", newTitle);
    } 
    else if (input == "d")
    {
        std::cout << "Please enter new Duration: ";

        std::string newDur;
        std::getline(std::cin, newDur);
        updateValue("duration", newDur);
    }
    else if(input == "q"){ break; }
    else { std::cout << "I don't recognize the char " << input << std::endl; }
    }
}

void Song::updateValue(std::string key, std::string value)
{
    song_map[key] = value;
}