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

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const int mXs = 1e7;
const double pi = acos(-1.0);

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    string input, courseName;
    int count;
    map<string, string> trace;
    map<string, int> templist;
    map<int, vector<string>> ans;

    while (getline(cin, input) && input != "0")
    {

        if (input == "1")
        {
            for (auto it = templist.begin(); it != templist.end(); it++)
            {
                ans[it->second].push_back(it->first);
            }
            for (auto it = ans.rbegin(); it != ans.rend(); it++)
            {
                sort(it->second.begin(),it->second.end());
                for(auto it1=it->second.begin();it1!=it->second.end();it1++){
                    cout<<*it1<<" "<<it->first<<endl;
                }
            }
            trace.clear();
            templist.clear();
            ans.clear();
            continue;
        }
        if (input[0] < 'a')
        {
            courseName = input;
            templist.insert({input, 0});
        }
        else if (trace.count(input))
        {
            if (trace[input] != courseName && trace[input] != " ")
            {
                templist[trace[input]]--;
                trace[input] = " ";
            }
        }
        else
        {
            trace[input] = courseName;
            templist[courseName]++;
        }
    }

    return 0;
}
