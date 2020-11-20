#include<iostream>
using namespace std;
int main(){
int t,h,m,i,k,temp,j,number,count=0;
char c;
scanf("%d",&t);
while(t--){
    scanf("%d%c%d",&h,&c,&m);
    h=12-h;

    if(m!=0)
    {
        m=60-m;
        h--;
    }
    if(h<=0)h=12+h;
    printf("%.2d:%.2d\n",h,m);
}
return 0;
}
