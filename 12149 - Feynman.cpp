#include<bits/stdc++.h>
using namespace std;

int main(){
   double n;
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
   //int i;
   while (1){
    scanf("%lf",&n);
    if(n==0)break;
    else printf("%.0lf\n",((n*n*n)/3)+(n*n)/2+(n/6));
   }
   return 0;
}
