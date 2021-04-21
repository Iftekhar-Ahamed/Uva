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
bool arra[10];
lld n,c;
void solve(lld i, string s)
{
    if (s.size() == 5)
    {
        stringstream ss(s);
        lld y;
        ss >> y;
        lld x = n * y;
        y = x;
        lld t = log10(x);
        if (t + 1 == 5)
        {
            map<lld,bool>data;
            while (x > 0)
            {
                if (arra[x % 10]||data[x%10])
                    return;
                data[x%10]=true;
                x /= 10;
            }
            c++;
            cout << y << " / " << s << " = " << n << endl;
        }
    }
    else
    {
        for (i = 0; i <= 9; i++)
        {
            if (!arra[i])
            {
                s.push_back(i + '0');
                arra[i] = true;
                solve(i + 1, s);
                arra[i] = false;
                s.pop_back();
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    //read;write;
    string s;
    bool flag=false;
    while (cin >> n&&n!=0)
    {
        if(flag)cout<<endl;
        memset(arra, false, sizeof(arra));
        c=0;
        s.clear();
        solve(0, s);
        if(c==0){
            cout<<"There are no solutions for "<<n<<"."<<endl;
        }
        flag=true;
    }
    return 0;
}
