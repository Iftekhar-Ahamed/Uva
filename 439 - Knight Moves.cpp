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
lld control[2][8]={{-1,1,-1,1,2,2,-2,-2},{2,2,-2,-2,1,-1,1,-1}};
lld bfs(char startcollum,lld startRow,char endcollum,lld endRow){
    map<pair<lld,char>,bool>visit;
    map<pair<lld,char>,lld>level;
    visit[{startRow,startcollum}]=true;
    level[{startRow,startcollum}]=0;
    queue<pair<lld,char>>trace;
    trace.push({startRow,startcollum});

    lld i,r;
    char c;
    while (!trace.empty())
    {
        for(i=0;i<8;i++){
            r=trace.front().first+control[0][i];
            c=trace.front().second+control[1][i];
            if((c<='h'&&c>='a')&&(r<=8&&r>=1)&&!visit[{r,c}]){
                visit[{r,c}]=true;
                level[{r,c}]=level[{trace.front().first,trace.front().second}]+1;
                if(r==endRow&&c==endcollum)return level[{r,c}];
                trace.push({r,c});
            }
        }
        trace.pop();
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    //read;write;
    char startcollum,endcollum;
    lld startRow,endRow;
    while (cin>>startcollum>>startRow>>endcollum>>endRow)
    {
        cout<<"To get from "<<startcollum<<startRow<<" to "<<endcollum<<endRow<<" takes "<<bfs(startcollum,startRow,endcollum,endRow)<<" knight moves."<<endl;
    }
    
    return 0;
}
