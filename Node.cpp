#include "Node.hpp"
#include <iostream>

Node::Node(Song curr)
{
    std::cout <<"IN NODE ---" << std::endl;
    std::cout << curr << std::endl;
}

// Node::Node(Song* curr, Song* prev)
// {
//     // node_map["prev"] = prev;
//     // node_map["curr"] = curr;
//     // node_map["next"] = next;

//     std::cout << curr << std::endl;
//     std::cout << prev << std::endl;
// }

Node::~Node(){};

