#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt","r",stdin);

double length, width, depth, weight;
int t,c=0;
scanf("%d",&t);
while(t--){
    scanf("%lf%lf%lf%lf",&length,&width,&depth,&weight);
    if(((length<=56.00&&width<=45.00&&depth<=25.00)||(length+width+depth)<=125.00) &&weight<=7.00){
        printf("1\n");
        c++;
    }else{
        printf("0\n");
    }
}
printf("%d\n",c);
return 0;
}

