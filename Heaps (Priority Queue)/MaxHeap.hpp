#include "dragon.hpp"
#include <vector>

class maxheap{
public:
    void insert(Dragon dragon);

    void extractMax();
    
    vector<Dragon> dragons;
private:
    void heapifyUp(int i);

    void heapifyDown(int i);

    
};