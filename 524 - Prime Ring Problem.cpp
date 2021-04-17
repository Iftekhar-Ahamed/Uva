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
bool prime[40];
void sive()
{
    int i, j;
    prime[0] = true;
    prime[1] = true;
    prime[2] = false;
    for (i = 4; i <= 35; i += 2)
        prime[i] = true;
    for (i = 3; i * i <= 35; i += 2)
    {
        if (!prime[i])
        {
            for (j = i * i; j <= 35; j += i)
            {
                prime[j] = true;
            }
        }
    }
}
void solve(lld n, lld i, vector<int> trace, map<int, bool> visit)
{

    if (trace.size() == n)
    {
        if (!prime[trace[n - 1] + 1])
        {
            for (i = 0; i < n-1; i++)
            {
                cout << trace[i] << " ";
            }
            cout <<trace[n-1]<< endl;
        }
    }
    else
    {
        for (lld j = 1; j <= n; j++)
        {
            if (j != i && visit[j] == false && !prime[i + j])
            {
                trace.push_back(j);
                visit[j] = true;
                solve(n, j, trace, visit);
                trace.pop_back();
                visit[j] = false;
            }
        }
    }
}
int main()
{
    sive();
    ios_base::sync_with_stdio(false);
    //read;write;
    lld n, i = 1;
    bool flag=false;
    while (cin >> n)
    {
        if(flag)cout<<endl;
        vector<int> trace;
        map<int, bool> visit;
        cout << "Case " << i++ << ":" << endl;
        trace.push_back(1);
        visit[1] = true;
        solve(n, 1, trace, visit);
        flag=true;
    }

    return 0;
}
