#include <iostream>
#include "MaxHeap.cpp"
using namespace std;

int main(){

Dragon D1 = Dragon("Ashwyn ", 5);
Dragon D2 = Dragon("Wyrn ", 25);
Dragon D4 = Dragon("john ", 10);
Dragon D5 = Dragon("obama ", 20);
Dragon D3 = Dragon("it me geg ", 15);
Dragon D6 = Dragon("eeee ", 7);
Dragon D7 = Dragon("aaaa ", 14);


maxheap heap;
heap.insert(D1);
heap.insert(D2);
heap.insert(D3);
heap.insert(D4);
heap.insert(D5);
heap.insert(D6);
heap.insert(D7);
heap.extractMax();


}