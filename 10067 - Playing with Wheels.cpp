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
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
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
#define mXs 1e6
const double pi = acos(-1.0);
set<string>forbidden;
string terget,intial;
string input(){
    char ch;
    string s;
    int n=4;
        while (n--)
        {
            cin>>ch;
            s+=ch;
        }
        return s;
}
int bfs(){
    queue<pair<string,int>>trace;
    trace.push({intial,0});
    string s,temp;
    int i,n,count;
    bool flag=true;
    while (!trace.empty())
    {
        s=trace.front().first;
        count=trace.front().second;

        if(s==terget){
            return count;
        }

        if(!forbidden.count(s) || flag){
            flag=false;
            for(i=0;i<4;i++){

                temp=s;
                n=temp[i]-'0';

                if(n+1>9){
                    temp[i]='0';
                }else{
                    temp[i]=(n+1)+'0';
                }
               
                if(!forbidden.count(temp)){
                    trace.push({temp,count+1});
                }

                temp=s;
                n=temp[i]-'0';
                if(n-1<0){
                    temp[i]='9';
                }else{
                    temp[i]=(n-1)+'0';
                }
                
                if(!forbidden.count(temp)){
                    trace.push({temp,count+1});
                }
            }

        }
        forbidden.insert(s);
        trace.pop();
    }
    return -1;
}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t,n,m;
    
    char ch;
    cin>>t;
    while (t--)
    {
        forbidden.clear();

        intial=input();
        terget=input();

        cin>>m;

        while (m--)
        {
            forbidden.insert(input());
        }

        cout<<bfs()<<endl;
    }
    
    return 0;
}
