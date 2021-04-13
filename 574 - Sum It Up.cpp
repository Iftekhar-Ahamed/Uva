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
lld n, c, j;
vector<lld> ans;
map<lld, bool> trace;
void solve(lld a[], lld sum, lld newsum, lld i, lld mul)
{
	if (newsum > sum)
		return;
	else if (sum == newsum)
	{
		if (!trace[mul])
		{
			c++;
			cout << ans[0];
			for (j = 1; j < ans.size(); j++)
				cout << "+" << ans[j];
			cout << endl;
			trace[mul]=true;
		}
		return;
	}
	else
	{
		for (; i < n; i++)
		{
			ans.push_back(a[i]);
			solve(a, sum, newsum + a[i], i + 1, mul * 10 + a[i]);
			ans.pop_back();
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
	lld i, sum;
	while (cin >> sum >> n)
	{
		ans.clear();
		trace.clear();
		c = 0;
		if (sum == n && n == 0)
			break;
		lld array[n];
		for (i = 0; i < n; i++)
		{
			cin >> array[i];
		}
		cout << "Sums of " << sum << ":\n";
		bool f = true;
		for (i = 0; i < n; i++)
		{
			if (array[i] == sum)
			{
				if (f)
				{
					cout << array[i] << endl;
					c++;
					f = false;
				}
			}
			else
			{
				ans.push_back(array[i]);
				solve(array, sum, array[i], i + 1, 10 + array[i]);
				ans.pop_back();
			}
		}
		if (c == 0)
			cout << "NONE\n";
	}

	return 0;
}
