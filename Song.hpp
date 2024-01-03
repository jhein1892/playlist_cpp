#ifndef SONG_H
#define SONG_H

#include <string>

class Song
{
    public:
        Song(std::string t, std::string a, std::string d);
        void describe();
        void editSong();
        std::string title;
        std::string artist;
        std::string duration;
        Song* next = nullptr;
        Song* prev = nullptr;
    
    private:
        void updateValue(std::string* key, std::string value);


};
#endif