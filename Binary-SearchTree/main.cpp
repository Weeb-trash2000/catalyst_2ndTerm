#include <iostream>
#include "MaxHeap.cpp"
#include "BST.cpp"
using namespace std;

int main()
{

    Dragon D1 = Dragon("A", 5);
    Dragon D2 = Dragon("B", 25);
    Dragon D4 = Dragon("C", 10);
    Dragon D5 = Dragon("G", 20);
    Dragon D3 = Dragon("E", 15);
    Dragon D6 = Dragon("F", 7);
    Dragon D7 = Dragon("D", 14);

    maxheap heap;
    heap.insert(D1);
    heap.insert(D2);
    heap.insert(D3);
    heap.insert(D4);
    heap.insert(D5);
    heap.insert(D6);
    heap.insert(D7);
    heap.extractMax();

    BST bst;

    bst.insert(D1);
    bst.insert(D2);
    bst.insert(D3);
    bst.insert(D4);
    bst.insert(D5);
    bst.insert(D6);
    bst.insert(D7);
    bst.inOrderTraversal(bst.root);
    string searchName;
    cout << "dragon to search for: ";
    cin >> searchName;

    bst.search(searchName);
}