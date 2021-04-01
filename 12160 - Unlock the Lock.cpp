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
int ary[12];
bool bfs(lld l,lld u,lld r,lld &ans){
	map<lld,bool>visit;
	map<lld,lld>level;
	visit[l]=true;
	level[l]=0;
	queue<lld>trace;
	trace.push(l);
	lld i,t,temp;
	while (!trace.empty())
	{
		t=trace.front();
		trace.pop();
		for(i=0;i<r;i++){
			temp=t+ary[i];
			if(temp>=10000)temp-=10000;
			if(!visit[temp]){
				visit[temp]=true;
				level[temp]=level[t]+1;
				if(temp==u){
					ans=level[temp];
					return true;
				}
				trace.push(temp);
			}
		}
	}
	return false;
	
}


int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
    lld l,u,r,i,ans,c=0;
	while (cin>>l>>u>>r && !(l==u && u==r && r==0))
	{
		for(i=0;i<r;i++)cin>>ary[i];
		cout<<"Case "<<++c<<": ";
		ans=0;
		if(bfs(l,u,r,ans)){
			cout<<ans<<endl;
		}else{
			cout<<"Permanently Locked\n";
		}
	}
	
	return 0;
}
