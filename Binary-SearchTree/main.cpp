#include <iostream>
#include "MaxHeap.cpp"
#include "BST.cpp"
using namespace std;

// int main()
// {

//     Dragon D1 = Dragon("A", 5);
//     Dragon D2 = Dragon("B", 25);
//     Dragon D4 = Dragon("C", 10);
//     Dragon D5 = Dragon("G", 20);
//     Dragon D3 = Dragon("E", 15);
//     Dragon D6 = Dragon("F", 7);
//     Dragon D7 = Dragon("D", 14);

//     maxheap heap;
//     heap.insert(D1);
//     heap.insert(D2);
//     heap.insert(D3);
//     heap.insert(D4);
//     heap.insert(D5);
//     heap.insert(D6);
//     heap.insert(D7);
//     heap.extractMax();

//     BST bst;

//     bst.insert(D1);
//     bst.insert(D2);
//     bst.insert(D3);
//     bst.insert(D4);
//     bst.insert(D5);
//     bst.insert(D6);
//     bst.insert(D7);
//     bst.inOrderTraversal(bst.root);
//     string searchName;
//     cout << "dragon to search for: ";
//     cin >> searchName;

//     bst.search(searchName);
// }

int main()
{
    maxheap heap;
    BST bst;

    // Insert dragons into the heap
    std::cout << "Inserting dragons into Heap...\n";
    heap.insert(Dragon("Smaug", 100));
    heap.insert(Dragon("Toothless", 80));
    heap.insert(Dragon("Drogon", 90));
    heap.insert(Dragon("Falkor", 60));
    heap.insert(Dragon("Norbert", 70));

    // Extract dragons from the heap and insert into the BST
    std::cout << "Extracting dragons from Heap and inserting into BST...\n";
    while (!heap.isEmpty())
    {
        Dragon dragon = heap.extractMax();
        bst.insert(dragon);
    }

    // Perform an in-order traversal of the BST and print the dragons' names and strengths
    std::cout << "Traversal of BST...\n";
    std::cout << "Dragons in alphabetical order:\n";
    std::cout << bst.inOrderTraversal();

    return 0;
}