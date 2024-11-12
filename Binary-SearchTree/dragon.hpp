#include <iostream>
#pragma once
using namespace std;

class Dragon
{
public:
    string name;
    int level;

    Dragon(string name, int level)
    {
        this->name = name;
        this->level = level;
    }
};