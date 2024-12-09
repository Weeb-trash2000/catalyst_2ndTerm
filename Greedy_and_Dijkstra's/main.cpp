#include "Greedy.cpp"

int main(){
    Attraction* a = new Attraction();
    Attraction* b = new Attraction();
    Attraction* c = new Attraction();
    Attraction* d = new Attraction();

    a->name = "A";
    b->name = "B";
    c->name = "C";
    d->name = "D";

    a->adj[b] = 1;
    a->adj[c] = 2;
    b->adj[d] = 3;
    c->adj[d] = 1;

    std::pair<int, std::vector<Attraction*>> result = findPathGreedy(b, d);
    cout << " Total distance: " << result.first << endl;

    
    return 1;
}
