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
#define _foritaretor(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);
void solve(string s){
    int n=s.size(),i,j,k;
    bool flag=true;
    for(i=0; i<n ;i++){
        for(flag=true,j=i+1 , k=0; j<n ; k++,j++){
            if(s[k]!=s[j])flag=false;
            if(k==i)k=-1;
        }
        if((flag && k==0) || i==n-1){
            cout<<i+1<<endl;
            return;
        }
    }
}


int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
    int t;
    bool flag=false;
    string s;
    while(cin>>t){
        while(t--){
            cin>>s;
            if(flag)cout<<endl;
            solve(s);
            flag=true;
        }
    }
	return 0;
}
