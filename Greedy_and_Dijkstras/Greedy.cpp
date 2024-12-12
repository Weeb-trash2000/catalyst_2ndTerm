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

        if (next == nullptr)
        {
            return std::make_pair(-1, std::vector<Attraction *>());
        }

        totalDistance += minDistance;
        current = next;
        path.push_back(current);
    }
    cout << "Total distance: " << totalDistance << endl;
    return std::make_pair(totalDistance, path);
}

std::pair<int, std::vector<Attraction *>> findPathdijkstra(Attraction *start, Attraction *end)


// std::pair<int, std::vector<Attraction *>> findPathdijkstra(Attraction *start, Attraction *end)
// {
//     Attraction *current = start;
//     int totaldistance = 0;
//     std::vector<Attraction *> path;
//     path.push_back(start);
//     while (current != end)
//     {
//         Attraction *next = nullptr;
//         int minDistance = 1000000;
//         for (auto it = current->adj.begin(); it != current->adj.end(); it++)
//         {
//             if (it->second < minDistance)
//             {
//                 next = it->first;
//                 minDistance = it->second;
//             }

//         }
//         if (next == nullptr){
//             return std::make_pair(-1, std::vector<Attraction *>());
//         }
//         totaldistance += minDistance;
//         current = next;
//         path.push_back(current);
//     }
//     cout << "Total distance: " << totaldistance << endl;
//     return std::make_pair(totaldistance, path);
// }