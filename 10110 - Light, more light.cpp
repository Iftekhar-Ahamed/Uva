#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    unsigned int n,s;
    while(1){
        scanf("%u",&n);
        if(n==0) break;
        s=sqrt(n);
        s*s==n? printf("yes\n"):printf("no\n");
    }
    return 0;
}
