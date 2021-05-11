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
map<string,lld>data;
void built(){
    char ch;
    string s;
    lld count=1;
    queue<string>trace;
    for(ch='a';ch<='z';ch++){
        s=ch;
        trace.push(s);
    }
    while (count<=83681)
    {
        s=trace.front();
        trace.pop();
        data[s]=count++;
        for(ch=s[s.size()-1]+1;ch<='z';ch++){
            trace.push(s+ch);
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    //read;
    //write;
    built();
    string s;
    while (cin>>s)
    {
        cout<<data[s]<<endl;
    }
    
    return 0;
}
