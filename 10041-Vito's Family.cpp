#include<iostream>
#include<algorithm>
using namespace std;
int cancel_negetive(int x){
if(x<0){
    return x*(-1);
}
return x;
}
int main(){

int t,t1,n,x,prev,sum=0;
cin>>t;
while(t--){
    cin>>n;
    int dis[n];
    sum=0;

    for(int i=0;i<n;i++){
        cin>>dis[i];
    }
    sort(dis,dis+n);
    int mid=dis[n/2],sum=0;
    for(int i=0;i<n;i++){
        sum+=cancel_negetive(mid-dis[i]);
    }
    cout<<sum<<endl;
}
return 0;
}
