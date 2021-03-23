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

int ans[10001],Final;
void solve(lld x,lld y){
	int i=x-y,j=x+y;
	if(i<0)i=0;
	if(j>10000)j=10000;
	for(i;i<=j;i++){
		ans[i]++;
		Final=max(Final,ans[i]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
	lld n, t,x,y;
	while (cin >> t)
	{
		if (t == 0)
			break;
		MEM(ans,0);
		Final= EPS;
		while (t--)
		{
			cin>>x>>y;
			solve(x,y);
		}
		cout<<Final<<endl;
	}

	return 0;
}
