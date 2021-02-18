#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long R,N,t=1,ans,r,vagfol,dif;
    while(cin>>R>>N&&R!=0&&N!=0)
    {
        dif=R-N;
        ans=dif/N;
        r=dif%N;
        if(r>0)
        {
            ans=ans+1;
        }
        if(ans>26)
            cout<<"Case "<<t<<": impossible"<<endl;
        else
            cout<<"Case "<<t<<": "<<ans<<endl;
        t++;
    }
    return 0;
}
