#include <iostream>
using namespace std;

const int MAXN = 100;
const int MAXM = 500;
const int INF = 1000000000;

struct Edge {
    int u, v, w;
};

Edge e[MAXM];

int dist[MAXN];
int parent[MAXN];

int n, m;

bool bellmanFord(int src) {

    for(int i = 0; i<n; i++){
        dist[i] = INF;
        parent[i] = -1;
    }
    dist[src] = 0;

    for(int pass = 0; pass < n; pass++){
        bool changed = false;

        for(int i = 0; i<m; i++){
            int u = e[i].u;
            int v = e[i].v;
            int w = e[i].w;

            if(dist[u] != INF && dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                parent[v] = u;
                changed = true;
            }
        }
        if(!changed) break;
    }

    // Step 3: Check negative cycle
    for (int j = 0; j < m; j++) {

        int u = e[j].u;
        int v = e[j].v;
        int w = e[j].w;

        if (dist[u] != INF &&
            dist[u] + w < dist[v]) {

            return false;   // Negative cycle found
        }
    }

    return true;
}

int main() {

    cin >> n >> m;

    // Input edges
    for (int i = 0; i < m; i++) {
        cin >> e[i].u >> e[i].v >> e[i].w;
    }

    bool ans = bellmanFord(0);
    // Source = 0
    if (!ans) {
        cout << "Negative cycle found\n";
        return 0;
    }

    // Print shortest distances
    for (int v = 0; v < n; v++) {

        cout << char('A' + v) << " = ";

        if (dist[v] == INF)
            cout << "INF\n";
        else
            cout << dist[v] << "\n";
    }

    return 0;
}