#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
   lld l,h,i,maxlen,n,count,number;
   while (scanf("%lld%lld",&l,&h)&&l!=0&&h!=0)
   {
      if(l>h)swap(l,h);
      maxlen=0;
      for(i=l;i<=h;i++){
         n=i;
         count=0;
         while (1)
         {
            n=(n%2==0)?(n/2):(3*n+1);
            count++;
            if(n==1)break;
         }
         if(maxlen<count){
            maxlen=count;
            number=i;
         }
      }
      printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",l,h,number,maxlen);
   }
   
   return 0;
}
