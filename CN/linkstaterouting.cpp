#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

const int INF = INT_MAX; // Infinite value

// Represents an edge in the graph
class Edge {
public:
    int to;
    int cost;
};

// Represents a vertex in the graph
class Vertex {
public:
    int id;
    vector<Edge> edges;

    // Define operator< for sorting vertices in the priority queue based on distance
    bool operator<(const Vertex& other) const {
        return dist > other.dist;
    }

    // Distance from the start vertex to this vertex
    int dist;
};

// Dijkstra's algorithm implementation
void dijkstra(vector<Vertex>& graph, int start) {
    int n = graph.size();

    // Distance array to store the shortest distance from the start vertex to each vertex in the graph
    vector<int> dist(n, INF);

    // Visited array to keep track of vertices that have been processed
    vector<bool> visited(n, false);

    // Priority queue to store vertices to be processed
    priority_queue<Vertex> pq;

    // Initialize the distance to the start vertex as 0
    dist[start] = 0;

    // Set the distance of the start vertex in the graph
    graph[start].dist = 0;

    // Add the start vertex to the priority queue
    pq.push(graph[start]);

    while (!pq.empty()) {
        // Extract the vertex with the smallest distance from the priority queue
        Vertex u = pq.top();
        pq.pop();

        // If the vertex has already been processed, continue
        if (visited[u.id]) {
            continue;
        }

        // Mark the vertex as processed
        visited[u.id] = true;

        // Relax all edges outgoing from the current vertex
        for (Edge& e : u.edges) {
            int v = e.to;
            int weight = e.cost;

            if (dist[u.id] + weight < dist[v]) {
                dist[v] = dist[u.id] + weight;
                graph[v].dist = dist[v];
                pq.push(graph[v]);
            }
        }
    }

    // Output the shortest distance from the start vertex to each vertex in the graph
    cout << "Shortest distances from vertex " << start << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vertex " << i << ": " << dist[i] << endl;
    }
}

// Test the implementation
int main() {
    // Create the graph
    vector<Vertex> graph = {
        {0, {{1, 2}, {3, 1}}},
        {1, {{0, 2}, {2, 3}, {3, 2}}},
        {2, {{1, 3}, {4, 2}}},
        {3, {{0, 1}, {1, 2}, {4, 4}}},
        {4, {{2, 2}, {3, 4}}}
    };

    // Run Dijkstra's algorithm starting from vertex 0
    dijkstra(graph, 0);

    return 0;
}
