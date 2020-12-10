#include<iostream>
using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    unsigned int n,i,t,j;
    bool flag=true;
    scanf("%u",&t);
    for(i=1;i<=t;i++){
        flag=true;
        for(j=0;j<13;j++){
        scanf("%u",&n);
        if(n==0)flag=false;
        }
    printf("Set #%u: ",i);
    flag?printf("Yes\n"):printf("No\n");
    }
    return 0;
}
