/***
**      Bismillahir Rahmanir Rahim
**              ALLAHU AKBAR
**
**     Author: Iftekhar Ahamed Siddiquee
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

#define read freopen("0_input.txt", "r", stdin)
#define write freopen("0_output.txt", "w", stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const int mXs = 1e7;
const double pi = acos(-1.0);
int root(int x,int parent[])
{
    while(parent[x]!=x)
    {
        parent[x]=parent[parent[x]];
        x=parent[x];
    }
    return x;
}
int prims(vector<pair<int, pair<int, int>>> graph, int v)
{

    int cost = 0, i = 0, n = graph.size(),x,y;

    int parent[v+1];
    for(i=0; i<=v; i++)parent[i]=i;

    for(i=0; i<n; i++)
    {
        x=root(graph[i].second.first,parent);
        y=root(graph[i].second.second,parent);
        if(x!=y)
        {
            cost+=graph[i].first;
            parent[x]=parent[y];
        }
    }


    return cost;
}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);

    int vertex, c = 0, i, u, v, cost, total, m, k;
    vector<pair<int, pair<int, int>>> graph;

    while (cin >> vertex)
    {
        graph.clear();

        total = 0;

        for (i = 1; i < vertex; i++)
        {
            cin >> u >> v >> cost;
            total += cost;
        }

        if (c++ != 0)
            cout << endl;

        cout << total << endl;

        cin >> k;

        for (i = 0; i < k; i++)
        {
            cin >> u >> v >> cost;
            graph.push_back({cost, {u, v}});
        }

        cin >> m;

        for (i = 0; i < m; i++)
        {
            cin >> u >> v >> cost;
            graph.push_back({cost, {u, v}});
        }
        sort(graph.begin(), graph.end());
        cout << prims(graph, vertex ) << endl;
    }

    return 0;
}
