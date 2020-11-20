#include<iostream>
#include<vector>
using namespace std;
int main(){
int t,n,i,k,temp,j,number,count=0;
vector<int>train;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    train.clear();
    k=1;
    count=0;
    while(k<=n){
        scanf("%d",&number);
        train.push_back(number);
        for(i=0;i<k;i++){
            if(number<train[i])count++;
        }
        k++;
    }
    printf("Optimal train swapping takes %d swaps.\n",count);
}
return 0;
}
