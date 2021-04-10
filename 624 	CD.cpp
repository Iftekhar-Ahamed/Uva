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
lld m=EPS;
bool flag=true;
vector<int>ans;

void reccursion(vector<int>array,lld sum,lld k,lld i,vector<int>temp){
	
	if(sum<k){
		if(sum>m){
			m=sum;
			ans=temp;
		}
		for(;i<array.size() && flag;i++){
			temp.push_back(array[i]);
			reccursion(array,sum+array[i],k,i+1,temp);
			temp.pop_back();
		}
	}else if(sum==k){
		m=sum;
		ans=temp;
		flag=false;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
	lld sum,i,n,x;
	
	while(cin>>sum){

		m=EPS;
		flag=true;
		cin>>n;
		vector<int>array(n);
		ans.clear();
		for(i=0;i<n;i++)cin>>array[i];
		
		reccursion(array,0,sum,0,ans);

		for(i=0;i<ans.size();i++)cout<<ans[i]<<" ";
		cout<<"sum:"<<m<<endl;
	}
	return 0;
}
