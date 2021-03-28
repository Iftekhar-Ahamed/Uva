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

void bfs(string start,string destination,map<string,vector<string>> data){
	map<string,bool>visit;
	visit[start]=true;
	queue<pair<string,vector<string>>>trace;
	vector<string>temp={start};
	string city;
	int i,n;
	trace.push({start,temp});

	while (!trace.empty())
	{
		city=trace.front().first;
		temp=trace.front().second;
		n=data[city].size();
		trace.pop();

		_for(i,0,n,1){
			if(!visit[data[city][i]]){
				visit[data[city][i]]=true;
				vector<string>t=temp;
				t.PB(data[city][i]);
				trace.push({data[city][i],t});

				if(data[city][i]==destination){
					_for(i,0,t.size()-1,1){
						cout<<t[i]<<" "<<t[i+1]<<endl;
					}
					return;
				}
			}
		}
	}

	cout<<"No route\n";
}


int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
	map<string,vector<string>>data;
	int n,i;
	string c1,c2;
	bool flag=false;
	while (cin>>n)
	{
		if(flag)cout<<endl;
		data.clear();
		_for(i,0,n,1){
			cin>>c1>>c2;
			data[c1].push_back(c2);
			data[c2].push_back(c1);
		}
		cin>>c1>>c2;
		bfs(c1,c2,data);
		flag=true;
	}
	
    
	return 0;
}
