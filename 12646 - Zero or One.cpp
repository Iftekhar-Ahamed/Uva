#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    unsigned int a,b,c;
    while(scanf("%u%u%u",&a,&b,&c)==3){
        if(a==b&&b==c){
             printf("*\n");
        }else if(a!=b&&b==c){
            printf("A\n");
        }else if(b!=a&&a==c){
             printf("B\n");
        }else{
             printf("C\n");
        }

    }
    return 0;
}
