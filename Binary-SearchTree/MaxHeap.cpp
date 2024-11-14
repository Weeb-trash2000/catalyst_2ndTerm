#include <iostream>
#include "MaxHeap.hpp"
#include <vector>
#include <list>
#include <algorithm>

void maxheap::heapifyUp(int i)
{
    int parent = (i - 1) / 2;
    while (i > 0 && dragons[parent].level < dragons[i].level)
    {
        cout << "swapped " << dragons[parent].name << " " << dragons[parent].level << " with " << dragons[i].name << " " << dragons[i].level << '\n';
        std::swap(dragons[parent], dragons[i]);
        i = parent;
        parent = (i - 1) / 2;
    }
}

void maxheap::heapifyDown(int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left < dragons.size() && dragons[left].level > dragons[largest].level)
    {
        largest = left;
    }
    if (right < dragons.size() && dragons[right].level > dragons[largest].level)
    {
        largest = right;
    }

    if (largest != i)
    {
        std::swap(dragons[i], dragons[largest]);
        heapifyDown(largest);
    }
}
void maxheap::insert(Dragon dragon)
{
    dragons.push_back(dragon);
    heapifyUp(dragons.size() - 1);
};

Dragon maxheap::extractMax()
{
    if (dragons.size() == 0)
    {
        cout << "heap is empty" << '\n';
    }
    else
    {
        Dragon max = dragons[0];
        dragons[0] = dragons[dragons.size() - 1];
        dragons.pop_back();
        heapifyDown(0);
        return max;
    }
    return dragons[0];
}
