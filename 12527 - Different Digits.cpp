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
lld ans[5001];
void makeArray0(lld ara[]){
    lld i;
    for(i=0;i<=9;i++)ara[i]=0;
}
void build(){
    lld i,check[10],temp,r;
    ans[0]=0;
    for(i=1;i<=5000;i++){
        makeArray0(check);
        temp=i;
        while (temp!=0)
        {
            r=temp%10;
            if(check[r]==1)break;
            else check[r]=1;
            temp/=10;
        }
        if(temp==0){
            ans[i]=ans[i-1]+1;
        }else{
            ans[i]=ans[i-1];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    //read;write;
    build();
    lld n, m;
    while (cin >> n >> m)
    {
        cout<<ans[m]-ans[n-1]<<endl;
    }

    return 0;
}
