#include<iostream>
#include<cmath>
using namespace std;
int main(){
long int n,row,last_num,ans;
while(cin>>n){
    row=(n+1)/2;
    last_num=row*row*2;
    last_num-=1;
    ans=last_num+(last_num-2)+(last_num-4);
    printf("%ld\n",ans);
    //printf("%ld\n",pow(2,63));
    //cout<<pow(2,63);

}
return 0;
}
