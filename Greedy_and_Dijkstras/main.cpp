#include "Greedy.cpp"

#define INF 99999
vector<vector<int>> map1 = {
    {0, 10, INF, 30, 100},
    {10, 0, 50, INF, INF},
    {INF, 50, 0, 20, 10},
    {30, INF, 20, 0, 60},
    {100, INF, 10, 60, 0}
};

int main(){
    vector<Attraction> Attractions(5);
    for (int i=0; i<5; i++){
        Attractions[i].name = "Attraction" + to_string(i);
    }

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (map1[i][j] != INF && map1[i][j] != 0){
                Attractions[i].adj[&Attractions[j]] = map1[i][j];
            }
        }
    }
    findPathGreedy(&Attractions[0], &Attractions[4]);

        

    findPathdijkstra(&Attractions[0], &Attractions[4]);
}
