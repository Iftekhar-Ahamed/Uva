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

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
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
string getsinglemultiplication(string s, int x, int n)
{

    int i, reminder = 0, multi;
    string ans;

    for (i = 0; i < n; i++)
        ans += "0";

    n = s.size();

    for (i = n - 1; i >= 0; i--)
    {
        multi = ((s[i] - '0') * x) + reminder;
        reminder = multi / 10;
        ans.push_back((multi % 10) + '0');
    }

    if (reminder > 0)
    {
        ans += to_string(reminder);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
string getsinglesumetion(string s1, string s2)
{
    if (s1.size() < s2.size())
        swap(s1, s2);

    string ans;
    lld i, n1 = s1.size(), n2 = s2.size(), j, reminder = 0, sum;

    for (i = n1 - 1, j = n2 - 1; i >= 0; i--, j--)
    {
        if (j >= 0)
        {
            sum = (s1[i] - '0') + (s2[j] - '0') + reminder;
            reminder = sum / 10;
            ans.push_back((sum % 10) + '0');
        }
        else
        {
            sum = (s1[i] - '0') + reminder;
            reminder = sum / 10;
            ans.push_back((sum % 10) + '0');
        }
    }
    if (reminder > 0)
    {
        ans += to_string(reminder);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
void solve(string x, string y)
{
    if (x.size() < y.size())
    {
        swap(x, y);
    }
    lld n = y.size(), j, i;
    string singlemultiplicationresult[n], ans;
    for (i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        singlemultiplicationresult[i] = getsinglemultiplication(x, (int)(y[j] - '0'), i);
    }

    if (n == 1)
    {
        ans = singlemultiplicationresult[0];
    }
    else
    {
        ans = getsinglesumetion(singlemultiplicationresult[0], singlemultiplicationresult[1]);
        for (i = 2; i < n; i++)
        {
            ans = getsinglesumetion(ans, singlemultiplicationresult[i]);
        }
    }
    for (i = 0; i < ans.size(); i++)
    {
        if (ans[i] != '0')
            break;
    }
    if (i > 0)
    {
        ans.erase(0, i);
    }
    if (ans.size() == 0)
    {
        cout << 0 << endl;
    }
    else
        cout << ans << endl;
}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    string x, y;
    while (cin >> x >> y)
    {
        solve(x, y);
    }

    return 0;
}
