#include <iostream>
#include<cmath>
using namespace std;

int main(){
int t;
double l,w,r,x,y;
cin>>t;
while(t--){

    cin>>l;
    r=l/5;
    w=(l*6)/10;
    x=acos(-1)*pow(r,2);
    y=(l*w)-x;
    printf("%.2f %.2lf\n",x,y);
    //cout<<x<<" "<<y<<endl;
}

return 0;
}
