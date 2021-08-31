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
#define mXs 1000
const double pi = acos(-1.0);
int graph[mXs][mXs], rgraph[mXs][mXs];

int i, j, t, n, m, num, source, terget;

void init_rgraph()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            rgraph[i][j]=INF;
        }
    }
}

int ans()
{
    priority_queue<pair<int,pair<int, int>>> trace;
    trace.push({-graph[0][0],{0,0}});
    int x,y,cost=0;
    rgraph[0][0]=graph[0][0];

    while (!trace.empty())
    {
        x=trace.top().second.first;
        y=trace.top().second.second;
        cost=-trace.top().first;
        trace.pop();

        if(x>0 && cost+graph[x-1][y]<rgraph[x-1][y]){
            rgraph[x-1][y]= cost+graph[x-1][y];
            trace.push({-rgraph[x-1][y],{x-1,y}});
        }

        if(x<n-1 &&  cost+graph[x+1][y]<rgraph[x+1][y]){
            rgraph[x+1][y]= cost+graph[x+1][y];
            trace.push({-rgraph[x+1][y],{x+1,y}});
        }

        if(y>0 &&  cost+graph[x][y-1]<rgraph[x][y-1]){
            rgraph[x][y-1]= cost+graph[x][y-1];
            trace.push({-rgraph[x][y-1],{x,y-1}});
        }

        if(y<m-1 && cost+graph[x][y+1]<rgraph[x][y+1]){
            rgraph[x][y+1]= cost+graph[x][y+1];
            trace.push({-rgraph[x][y+1],{x,y+1}});
        }

        
    }
    return rgraph[n-1][m-1];
}
int main()
{
    cin.tie(NULL);
    //read;
    //write
    ios_base::sync_with_stdio(false);

    cin >> t;
    while (t--)
    {
        
        cin >> n >> m;
        init_rgraph();

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> graph[i][j];
            }
        }
        cout << ans() << endl;
    }

    return 0;
}
