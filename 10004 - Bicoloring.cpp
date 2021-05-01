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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);

bool graphbicoloring(lld n)
{
    lld e, x, y, i, cr = 0, j;
    vector<vector<lld>> data(n);
    cin >> e;
    while (e--)
    {
        cin >> x >> y;
        data[x].push_back(y);
        data[y].push_back(x);
    }

    char visit[n];
    memset(visit,'n',sizeof(visit));
    queue<int>trace;
    trace.push(0);
    visit[0]='w';
    while (!trace.empty())
    {
        x=trace.front();
        trace.pop();
        cr=data[x].size();
        for(i=0;i<cr;i++){
            y=data[x][i];
            if(visit[y]=='n'){
                if(visit[x]=='w'){
                    visit[y]='b';
                }else{
                    visit[y]='w';
                }
                trace.push(y);
            }else if(visit[y]==visit[x])return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    //read;write;
    lld n;
    while (cin >> n && n != 0)
    {
        if (graphbicoloring(n))
        {
            cout << "BICOLORABLE.\n";
        }
        else
        {
            cout << "NOT BICOLORABLE.\n";
        }
    }
    return 0;
}
