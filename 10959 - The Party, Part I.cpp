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

lld level[1010];


lld bfs(map<lld,vector<lld>>data,lld target){
	map<lld,bool>visit;
	visit[data.begin()->first]=true;
	level[data.begin()->first]=0;
	queue<lld>trace;
	trace.push(data.begin()->first);
	lld i,index,n;
	while (!trace.empty())
	{
		index=trace.front();
		trace.pop();
		n=data[index].size();
		for(i=0;i<n;i++){
			if(!visit[data[index][i]]){
				visit[data[index][i]]=true;
				trace.push(data[index][i]);
				level[data[index][i]]=level[index]+1;
				if(data[index][i]==target)return level[data[index][i]];
				
			}
		}
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
	lld t,p1,p2,n,d,i;
	bool falg=false;
	cin>>t;
	while (t--)
	{
		if(falg)cout<<endl;
		cin>>n>>d;
		map<lld,vector<lld>>data;
		while (d--)
		{
			cin>>p1>>p2;
			data[p1].push_back(p2);
			data[p2].push_back(p1);
		}
		for(i=1;i<=n-1;i++){
			memset(level,0,n+1);
		    cout<<bfs(data,i)<<endl;
		}
		falg=true;
	}
	
    
	return 0;
}
