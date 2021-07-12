// C++ program for implementation of Ford Fulkerson
// algorithm
#include <iostream>
#include <limits.h>
#include <queue>
#include <string.h>
using namespace std;

int graph[110][110], rGraph[110][110];

bool bfs(int s, int t, int parent[], int V)
{

    bool visited[V];
    memset(visited, 0, sizeof(visited));

    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v = 0; v < V; v++)
        {
            if (visited[v] == false && rGraph[u][v] > 0)
            {

                if (v == t)
                {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return false;
}

int fordFulkerson(int s, int t, int V)
{
    int u, v;
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            rGraph[u][v] = graph[u][v];

    int parent[V];

    int max_flow = 0;

    while (bfs(s, t, parent, V))
    {

        int path_flow = INT_MAX;
        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }

        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] -= path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}


int main()
{

    int i, j, number_of_node, x, y, w, t, s, n, xx = 1;
    while (cin >> number_of_node && number_of_node != 0)
    {
        for (i = 0; i < number_of_node; i++)
            for (j = 0; j < number_of_node; j++)
                graph[i][j] = 0;
        cin >> s >> t >> n;
        for (i = 0; i < n; i++)
        {
            cin >> x >> y >> w;
            graph[x - 1][y - 1] += w;
            graph[y - 1][x - 1] += w;
        }
        cout << "Network " << xx++ << endl
            << "The bandwidth is " << fordFulkerson(s - 1, t - 1, number_of_node) << ".\n\n";
    }

    return 0;
}
