#ifndef MAXHEAP_HPP
#define MAXHEAP_HPP
#include "dragon.hpp"
#include <vector>

class maxheap
{
public:
    void insert(Dragon dragon);

    Dragon extractMax();

    vector<Dragon> dragons;

    bool isEmpty()
    {
        return dragons.empty();
    }

private:
    void heapifyUp(int i);

    void heapifyDown(int i);
};

#endif // MAXHEAP_HPP