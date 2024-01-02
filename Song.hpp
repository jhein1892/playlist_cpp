#ifndef SONG_H
#define SONG_H

#include <string>
#include <map>

class Song
{
    public:
        Song(std::string title, std::string artist, std::string duration);
    
    protected:
        std::map<std::string, std::string> song_map;


};
#endif