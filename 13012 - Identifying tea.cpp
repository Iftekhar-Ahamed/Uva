#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    unsigned int n,i,t,j;
    while(scanf("%u",&t)==1){
        for(i=0,j=0;j<5;j++){
        scanf("%u",&n);
        if(n==t)i++;
        }
        printf("%d\n",i);
    }
    return 0;
}
