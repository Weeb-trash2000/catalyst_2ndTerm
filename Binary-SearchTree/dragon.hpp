#ifndef dragon_HPP
#define dragon_HPP
#include <iostream>
using namespace std;
#pragma once
class Dragon
{
public:
    string name;
    int level;

    Dragon(string name, int level) : name(name), level(level) {}
};

#endif // DRAGON_HPP