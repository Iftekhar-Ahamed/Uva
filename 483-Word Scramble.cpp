
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
int find_position(string s,char a){
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]==a){
            return i;
        }
    }
    return s.size();
}

int main(){
  string s;
  while(getline(cin,s)){
      int a=0;
    while (1)
    {
        string sub;
        int i;
        for( i=0;i<s.size();i++){
            if(s[i]==' '){
                cout<<s[i];
            }
            else
            {
                break;
            } 
        }
         s.erase(0,i);
        sub=s.substr( 0 ,find_position(s,' '));
        s.erase(0,find_position(s,' '));
        reverse(sub.begin(),sub.end());
        cout<<sub;
        if(s.empty())break;
    }
    cout<<endl;
  }
  return 0;
}
