#include "BST.hpp"

void BST::insert(Dragon dragon)
{
    if (root == nullptr)
    {
        root = new BSTNode(dragon);
        // cout << "root is " << root -> dragon.name << '\n';
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

                    // cout << "left is " << current -> left -> dragon.name << '\n';
                    break;
                }
                else
                {
                    current = current->left;
                    // cout << "current is " << current -> dragon.name << '\n';
                }
            }
            else
            {
                if (current->right == nullptr)
                {
                    current->right = new BSTNode(dragon);

                    // cout << "right is " << current -> right -> dragon.name << '\n';
                    break;
                }
                else
                {
                    // cout << "iwantdie" << '\n';
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

void BST::inOrderTraversal(BSTNode *root)
{
    BSTNode *current = root;
    if (current != nullptr)
    {
        inOrderTraversal(current->left);
        cout << current->dragon.name << '\n';
        inOrderTraversal(current->right);
    }
}
