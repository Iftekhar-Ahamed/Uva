#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,t,r,ans;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ans=0;
        while(n>=m){
            r=n%m;
            n=n/m;
            ans+=n;
            n+=r;
        }
        if(n==1)
        cout<<ans<<endl;
        else cout<<"cannot do this\n";
    }
    return 0;
}
