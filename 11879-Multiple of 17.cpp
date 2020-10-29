#include<iostream>
using namespace std;

int main(){
    string s;
    int c,i;
    while (cin>>s&&!(s[0]=='0'&&s.size()==1))
    {
     c=0;
     for(i=0;i<s.size();i++){
        c=(c*10+s[i]-'0')%17;
     } 
     if(c==0) cout<<1<<endl;
     else cout<<0<<endl;
      
    }
  return 0;  
}
