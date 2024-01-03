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

// Provides flow for editing song components
void Song::editSong()
{
    while(true)
   { 
    std::string input;
    std::cout << "What would you like to edit:\nArtist 'a', Title 't', Duration 'd' ('q' to exit): ";
    std::getline(std::cin, input);

    std::string newValue;
    std::string* key;
    if(input == "a")
    {
        std::cout << "Please enter new Artist Name: ";
        std::getline(std::cin, newValue);
        key = &artist;
    } 
    else if (input == "t")
    {
        std::cout << "Please enter new Title: ";
        std::getline(std::cin, newValue);
        key = &title;
    } 
    else if (input == "d")
    {
        std::cout << "Please enter new Duration: ";
        std::getline(std::cin, newValue);
        key = &duration;
    }
    else if(input == "q"){ break; }
    else { std::cout << "I don't recognize the char " << input << std::endl; }

    updateValue(key, newValue);
    }

    describe();
}

void Song::updateValue(std::string* key, std::string value)
{
    *key = value;   
}