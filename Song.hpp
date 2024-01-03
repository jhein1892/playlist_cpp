#ifndef SONG_H
#define SONG_H

#include <string>

class Song
{
    public:
        Song(std::string t, std::string a, std::string d);
        void describe();
        void updateNext(Song* song);
        void updatePrev(Song* song);
        Song* getNext();
        Song* getPrev();
    
    private:
        std::string title;
        std::string artist;
        std::string duration;
        Song* next = nullptr;
        Song* prev = nullptr;
};
#endif