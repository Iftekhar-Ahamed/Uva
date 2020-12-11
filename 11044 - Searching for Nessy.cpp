#include<stdio.h>
int main ()
{
int t,n,m,i;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&n,&m);
    while(!(n%3==0)){
        n--;
    }
    while(!(m%3==0)){
        m--;
    }
    printf("%d\n",n/3*m/3);
}
return 0;
}
