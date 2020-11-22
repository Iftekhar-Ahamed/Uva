#include<iostream>
#include<map>
using namespace std;

int main(){
int t,day,party,perameter,temp;
map<int,int>hartal;

scanf("%d",&t);
while(t--){
 hartal.clear();
 scanf("%d",&day);
 scanf("%d",&party);

 while(party--){
    scanf("%d",&perameter);
    temp=perameter;
    while(temp<=day){
    if(temp%7!=6&&temp%7!=0){
        hartal.insert(make_pair(temp,1));
    }
    temp+=perameter;
    }
 }
cout<<hartal.size()<<endl;
}
return 0;
}
