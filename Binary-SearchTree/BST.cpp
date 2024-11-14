#include "BST.hpp"

void BST::insert(Dragon dragon)
{
    if (root == nullptr)
    {
        root = new BSTNode(dragon);
    }
    else
    {
        BSTNode *current = root;
        while (true)
        {
            if (dragon.name < current->dragon.name)
            {
                if (current->left == nullptr)
                {
                    current->left = new BSTNode(dragon);
                    break;
                }
                else
                {
                    current = current->left;
                }
            }
            else
            {
                if (current->right == nullptr)
                {
                    current->right = new BSTNode(dragon);
                    break;
                }
                else
                {
                    current = current->right;
                }
            }
        }
    }
}

BSTNode *BST::search(string name)
{
    BSTNode *current = root;
    while (current != nullptr)
    {
        cout << "current is " << current->dragon.name << '\n';
        if (current->dragon.name == name)
        {

            cout << "found " << current->dragon.name << '\n';

            return current;
        }
        else if (name < current->dragon.name)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }
    cout << "not found" << '\n';
    return nullptr;
}

string BST::inOrderTraversalHelper(BSTNode *current)
{
    string traversal;
    if (current != nullptr)
    {
        traversal += inOrderTraversalHelper(current->left);
        cout << current->dragon.name << '\n';
        traversal += inOrderTraversalHelper(current->right);
    }
    return traversal;
}

string BST::inOrderTraversal()
{
    inOrderTraversalHelper(root);
    return "";
}
