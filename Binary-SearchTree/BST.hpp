#ifndef BST_HPP
#define BST_HPP
#include "dragon.hpp"

class BSTNode
{
public:
    Dragon dragon;
    BSTNode *left;
    BSTNode *right;

    // BSTNode(Dragon dragon);

    BSTNode(Dragon d) : dragon(d), left(nullptr), right(nullptr) {}
};

class BST
{
public:
    BSTNode *root;

    void insert(Dragon dragon);

    BSTNode *search(string name);

    void inOrderTraversal(BSTNode *root);
};

#endif // BST_HPP