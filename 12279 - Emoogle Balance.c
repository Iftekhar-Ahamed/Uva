#include<stdio.h>
int main(){
int a,b=0,d,t,i;
while(1){
    scanf("%d",&t);
    if(t==0)break;
    a=0;
   for(i=1;i<=t;i++){
     scanf("%d",&d);
     if(d==0){
        a--;
     }else{
      a++;
     }
   }
    printf("Case %d: %d\n",++b,a);
}

return 0;
}
