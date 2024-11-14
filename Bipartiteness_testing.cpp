//Check whether a given graph is Bipartite or not.

#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100; // Maximum number of vertices in the graph

bool isBipartite(int graph[MAX][MAX], int V) {
    int color[MAX];  // Array to store colors of vertices, -1 means uncolored
    for (int i = 0; i < V; i++) {
        color[i] = -1;  // Initialize all vertices as uncolored
    }

    // Try to color each component of the graph
    for (int src = 0; src < V; src++) {
        if (color[src] == -1) {  // If the vertex is uncolored
            color[src] = 1;  // Color the source vertex with color 1

            queue<int> q;
            q.push(src);

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                // Check all adjacent vertices of u
                for (int v = 0; v < V; v++) {
                    // Check if there's an edge between u and v
                    if (graph[u][v] == 1) {
                        // If the adjacent vertex is not colored, color it with opposite color
                        if (color[v] == -1) {
                            color[v] = 1 - color[u];
                            q.push(v);
                        }
                        // If the adjacent vertex has the same color as the current vertex, it's not bipartite
                        else if (color[v] == color[u]) {
                            return false;
                        }
                    }
                }
            }
        }
    }

    return true;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    int graph[MAX][MAX] = {0}; // Initialize adjacency matrix with 0s

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1; // Since the graph is undirected
    }

    if (isBipartite(graph, V)) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }

    return 0;
}
