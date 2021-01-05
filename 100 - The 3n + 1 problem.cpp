#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
while(cin>>a>>b){
    int x=a>b?a:b;
    int y=a<b?a:b;
    int max=1;
    for(int i=y;i<=x;i++){
        int n=i,cycle=1;
        while(n>1){
            if(n%2==0)n=n/2;
            else n=(3*n)+1;
            cycle++;
        }
        max=max>cycle?max:cycle;
    }
    cout<<a<<" "<<b<<" "<<max<<endl;
}
return 0;
}
