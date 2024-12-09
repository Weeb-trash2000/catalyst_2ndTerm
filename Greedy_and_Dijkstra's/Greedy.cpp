#include "Attraction.hpp"

std::pair<int, std::vector<Attraction *>> findPathGreedy(Attraction *start, Attraction *end)
{
    Attraction *current = start;
    int totalDistance = 0;
    std::vector<Attraction *> path;
    path.push_back(start);
    while (current != end)
    {
        Attraction *next = nullptr;
        int minDistance = 1000000;
        for (auto it = current->adj.begin(); it != current->adj.end(); it++)
        {
            if (it->second < minDistance)
            {
                next = it->first;
                minDistance = it->second;
            }

        }

        totalDistance += minDistance;
        current = next;
        path.push_back(current);
    }
    return std::make_pair(totalDistance, std::vector<Attraction *>());
}