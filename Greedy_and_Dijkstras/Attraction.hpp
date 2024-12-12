#include <iostream>
#include <vector>
using namespace std;
#include <map>

class Attraction {
    public:
        string name;
        map <Attraction*, int> adj;
};