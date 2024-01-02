#ifndef NODE_H
#define NODE_H

#include "Song.hpp"
#include <map>

class Node
{
    public:
        Node(Song curr);
        // Node(Song* curr, Song* prev);
        ~Node();
        std::map<std::string, Song*> node_map;
};

#endif
