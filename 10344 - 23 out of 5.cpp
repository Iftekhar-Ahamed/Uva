#include<bits/stdc++.h>
using namespace std;
bool check(int arra[]){
    for(int i=0;i<5;i++)if(arra[i]!=0)return false;
    return true;
}
void take_input(int arra[]){
    for(int i=0;i<5;i++)cin>>arra[i];
}
bool operation(int arra[],int n,long int sum){
    if(n==5){
        if(sum==23)return true;
        else return false;
    }
    return operation(arra,n+1,sum+arra[n])||operation(arra,n+1,sum-arra[n])||operation(arra,n+1,sum*arra[n]);
}
int main(){
    int arra[5];
    while(1){
        take_input(arra);
        bool flag=false;
        if(check(arra))break;
        sort(arra,arra+5);
        do{
                flag=operation(arra,1,arra[0]);
                if(flag)break;
        }while(next_permutation(arra,arra+5));
        if(flag)printf("Possible\n");
        else printf("Impossible\n");
    }

    return 0;
}
