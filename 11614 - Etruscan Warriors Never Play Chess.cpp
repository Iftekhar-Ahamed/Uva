#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n,number;
    cin>>n;
    while (n--)
    {
        cin>>number;
        cout<<(long long int)(((-1)+sqrt(1+(4*2*number)))/2)<<endl;
    }
    return 0;
}
