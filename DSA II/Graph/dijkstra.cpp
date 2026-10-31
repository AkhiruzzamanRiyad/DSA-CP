#include <iostream>
using namespace std;

const int INF = 1e9;
const int MAXN = 1000;

int n,m;
int adj[MAXN][MAXN];
int dist[MAXN];
int parent[MAXN];
bool visited[MAXN];

void dijkstra(int src)
{
    for(int i = 0; i<n; i++){
        dist[i] = INF;
        parent[i] = -1;
        visited[i] = false;
    }
    dist[src] = 0;

    for(int step = 0 ; step<n; step++){
        int u =-1;
        for(int i = 0; i<n; i++){
            if(!visited[i] && ( u =-1 || dist[u] > dist[i]))
                u = i;
        }

        if(dist[u] == INF) break;
        visited[u] = true;

        for(int v = 0; v<n; v++){
            if(adj[u][v] == INF) continue;

            if(dist[v] > dist[u] + adj[u][v]){
                dist[v] = dist[u] + adj[u][v];
                parent[v] = u;
            }
        }
    }
}

void printPath(int v)
{
    if (parent[v] != -1)
        printPath(parent[v]);
    cout << char('A' + v) << " ";
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INF;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u][v] = w;
        adj[v][u] = w;
    }

    dijkstra(0);

    for (int v = 0; v < n; v++)
    {
        cout << char('A' + v) << " = " << dist[v] << " : ";
        printPath(v);
        cout << endl;
    }

    return 0;
}