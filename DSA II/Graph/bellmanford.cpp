#include <iostream>
using namespace std;
const int INF = 1e9;
const int MAXN = 1000;
const int MAXM = 5000;

struct Edge
{
    int u, v, w;
};

Edge e[MAXM];
int dist[MAXN];
int parent[MAXN];

int n, m;

bool bellmanFord(int src)
{

    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
        parent[i] = -1;
    }

    dist[src] = 0;

    for (int pass = 1; pass <= n - 1; pass++)
    {
        bool changed = false;

        for (int i = 0; i < n; i++)
        {
            int u = e[i].u;
            int v = e[i].v;
            int w = e[i].w;

            if (dist[u] != INF && dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                parent[v] = u;
                changed = true;
            }
        }
        if (!changed)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        int u = e[i].u;
        int v = e[i].v;
        int w = e[i].w;

        if (dist[u] != INF && dist[v] > dist[u] + w)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i<m; i++){
        cin >> e[i].u >> e[i].v >> e[i].w;
    }

    bool bellmanFord_ans = bellmanFord(0);

    if(!bellmanFord_ans){
        cout << "Negative cycle exixt." << endl;
        return 0;
    }

    for(int v = 0; v<n; v++ ){
        cout << char('A' + v) << " = ";

        if(dist[v] == INF) cout << INF << endl;
        else cout << dist[v] << endl;
    }

    return 0;
}