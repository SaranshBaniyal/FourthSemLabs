#include <iostream>
#include <climits>

using namespace std;

int graph[3][3] = {
    {0, 3, 5},
    {3, 0, 9},
    {5, 9, 0}
};

void dijkstra(int src_node) {
    int shortest_distances[3];
    int i, j, k;
    for (i = 0; i < 3; i++) {
        shortest_distances[i] = INT_MAX;
    }
    shortest_distances[src_node] = 0;

    for (i = 0; i < 3 - 1; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                if (shortest_distances[j] != INT_MAX && shortest_distances[j] + graph[j][k] < shortest_distances[k]) {
                    shortest_distances[k] = shortest_distances[j] + graph[j][k];
                }
            }
        }
    }
    
    cout << "Shortest paths from node " << src_node << ":\n";
    for (i = 0; i < 3; i++) {
        if (shortest_distances[i] == INT_MAX) {
            cout << "Node " << i << ": Unreachable\n";
        } else {
            cout << "Node " << i << ": " << shortest_distances[i] << endl;
        }
    }
}

int main() {
    dijkstra(0);
    return 0;
}
