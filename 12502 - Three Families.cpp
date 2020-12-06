#include<bits/stdc++.h>
using namespace std;
int main(){

double per_our,a, x,y,z;
int i,n;

scanf("%d",&n);
for(i=1;i<=n;i++)
{

  scanf("%lf%lf%lf",&x,&y,&z);
{
    per_our=z/(x+y);
    a=x*per_our+(x-y)*per_our;
}

printf("%.0lf\n",a);
}

return 0;

}
