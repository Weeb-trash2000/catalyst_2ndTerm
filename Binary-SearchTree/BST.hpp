#ifndef BST_HPP
#define BST_HPP
#include "dragon.hpp"

struct BSTNode
{
    Dragon dragon;
    BSTNode *left;
    BSTNode *right;

    BSTNode(Dragon dragon) : dragon(dragon), left(nullptr), right(nullptr) {}
};

class BST
{
public:
    BST() : root(nullptr) {}

    void insert(Dragon dragon);

    BSTNode *search(string name);

    string inOrderTraversal();

private:
    BSTNode *root;

    string inOrderTraversalHelper(BSTNode *node);
};

#endif // BST_HPP