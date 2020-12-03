#include<iostream>
using namespace std;
int main(){
int number[100001],t,n,i;
cin>>t;
while(t--){
    cin>>n;
    int mx=-150010,max_dif=-150010;
    for(i=0;i<n;i++){
        cin>>number[i];
    }
    for(i=0;i<n-1;i++){
        if(number[i]>mx){
            mx=number[i];
        }
        if((mx-number[i+1])>max_dif){
            max_dif=mx-number[i+1];
        }
    }
    printf("%d\n",max_dif);
}
return 0;
}
