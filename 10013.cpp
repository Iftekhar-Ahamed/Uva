#include <iostream>
using namespace std;
long long int t,a[1000001],b[1000001],c[1000001];
int main()
{
    cin>>t;
    while(t--)
    {

        long long int n,sum=0,j,k=0,l;
        int i;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        for(i=n-1,k=0; i>=0; i--,k++)
        {
            sum+=a[i]+b[i];
            c[k]=sum%10;
            sum/=10;
        }
        for(i=n-1; i>=0; i--)
        {
            cout<<c[i];
        }
        if(t==0)cout<<endl;
        else
            cout<<"\n"<<endl;
    }
    return 0;
}
