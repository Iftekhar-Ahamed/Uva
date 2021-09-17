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

#define read freopen("0_input.txt", "r", stdin)
#define write freopen("0_output.txt", "w", stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF 1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 10000000
const double pi = acos(-1.0);
int prime[mXs];
vector<int> prime_number;

void seive()
{
    memset(prime, 0, sizeof(prime));
    prime_number.push_back(2);
    lld i, j;
    for (i = 3; i * i <= mXs; i += 2)
    {

        if (!prime[i])
        {

            for (j = i * i; j < mXs; j += i)
            {

                prime[j] = 1;
            }
        }
    }
    for (i = 3; i < mXs; i += 2)
    {
        if (!prime[i])
        {
            prime_number.push_back(i);
        }
    }
}
bool isprime(lld n)
{
    int i, x = sqrt(n);
    for (i = 0; i < prime_number.size() && prime_number[i] <= x; i++)
    {
        if (n % prime_number[i] == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    seive();
    //cout << prime_number.size() << endl;
    lld a, b, i, j, minn, maxx, prev, x, y, x1, y1;
    bool flag;
    while (cin >> a >> b)
    {
        flag = false;
        prev = 0;
        minn = 10000000000;
        maxx = -1;

        if (a >= mXs && b >= mXs)
        {

            for (i = a; i <= b; i++)
            {
                if (isprime(i))
                {
                    if (prev != 0 && minn > (i - prev))
                    {
                        x = i;
                        y = prev;
                        minn = i - prev;
                        flag = true;
                    }
                    if (prev != 0 && maxx < (i - prev))
                    {
                        x1 = i;
                        y1 = prev;
                        maxx = i - prev;
                    }
                    prev = i;
                }
            }
            if (flag)
                {
                    cout << y << "," << x << " are closest, " << y1 << "," << x1 << " are most distant." << endl;
                }
                else
                {
                    cout << "There are no adjacent primes." << endl;
                }
        }
        else
        {
            vector<int>::iterator low;

            low = lower_bound(prime_number.begin(), prime_number.end(), a);
            int i = low - prime_number.begin();
            while (prime_number[i] <= b)
            {
                if (prev != 0 && minn > (prime_number[i] - prev))
                {
                    x = prime_number[i];
                    y = prev;
                    minn = prime_number[i] - prev;
                    flag = true;
                }
                if (prev != 0 && maxx < (prime_number[i] - prev))
                {
                    x1 = prime_number[i];
                    y1 = prev;
                    maxx = prime_number[i] - prev;
                }
                prev = prime_number[i];
                i++;
            }
            if (flag)
            {
                cout << y << "," << x << " are closest, " << y1 << "," << x1 << " are most distant." << endl;
            }
            else
            {
                cout << "There are no adjacent primes." << endl;
            }
        }
    }

    return 0;
}
