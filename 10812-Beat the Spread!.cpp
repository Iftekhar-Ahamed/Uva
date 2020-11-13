#include <iostream>
using namespace std;

int main(){

long long int a,b,t;
long long int x,y;
cin>>t;
while(t--){
 cin>>a>>b;
 x=(a+b)/2;
 y=(a-((a+b)/2));
 if(a>=b&&(a+b)%2==0){
    cout<<x<<" "<<y<<endl;

 }else{
 cout<<"impossible"<<endl;
 }
}
return 0;
}
