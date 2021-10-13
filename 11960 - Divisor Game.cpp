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
#include <limits.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iomanip>
using namespace std;

#define read freopen("0_input.txt","r",stdin)
#define write freopen("0_output.txt","w",stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 1000000
const double pi = acos(-1.0);
int preload[mXs+1];
void divisor(){
    lld i,j,k=1;
    int maxx=1;
    memset(preload,0,sizeof(preload));
    preload[1]=1;
    for(i=2;i<=mXs;i++){
        for(j=i;j<=mXs;j+=i){
            preload[j]++;
        }
        if(maxx<=preload[i]){
            maxx=preload[i];
            k=i;
        }
        preload[i]=k;
    }
}

int main()
{
    cin.tie(NULL);
    read;
    write;
    ios_base::sync_with_stdio(false);
    divisor();
    lld t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<preload[n]<<endl;
    }
    
    return 0;
}
