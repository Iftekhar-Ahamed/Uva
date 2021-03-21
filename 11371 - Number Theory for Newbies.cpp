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
#define MEM(a, b) memset(a, (b), sizeof(a))
#define _for(i, j, k, in) for (int i = j; i < k; i += in)
#define _rfor(i, j, k, in) for (int i = j; i >= k; i -= in)
#define _foritaretor(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);
lld conert(string s)
{
    lld num, i;
    char ch;    
    if (s[0] == '0')
    {
        _for(i, 1, s.size(), 1)
        {
            if (s[i] != '0')
            {
                ch = s[i], s.erase(s.begin() + i, s.begin() + i + 1);
                break;
            }
        }
        s = ch + s;
    }
   
    stringstream ss(s);
    ss >> num;
    return num;
}
void solve(string s)
{
    sort(s.begin(), s.end());
    lld min = conert(s), max;
    reverse(s.begin(), s.end());
    max = conert(s);
    cout << max << " - " << min << " = " << max - min << " = "
         << "9 * " << (max - min) / 9 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //read;
    //write;
    string s;
    while (cin >> s)
    {
        solve(s);
    }

    return 0;
}
