#ifndef SONG_H
#define SONG_H

#include <string>
#include <map>

class Song
{
    public:
        Song(std::string title, std::string artist, std::string duration);
        void describe();
        void editSong();
        Song* next = nullptr;
        Song* prev = nullptr;
    
    protected:
        std::map<std::string, std::string> song_map;
    
    private:
        void updateValue(std::string key, std::string value);


};
#endif