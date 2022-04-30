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

#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
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
    lld t,cd,cm,cy,bd,bm,by,age,k=1;
    char ch;

    cin>>t;
    while (t--)
    {
        cin>>cd>>ch>>cm>>ch>>cy;
        cin>>bd>>ch>>bm>>ch>>by;
        age=cy-by;

        if(bm>cm)age--;
        if(bm==cm && cd<bd)age--;

        cout<<"Case #"<<k++<<": ";
        if(age<0){
            cout<<"Invalid birth date\n";
        }else if(age>130){
            cout<<"Check birth date"<<endl;
        }else{
            cout<<age<<endl;
        }
    }
    
    return 0;
}
