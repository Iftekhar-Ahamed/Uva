#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
map<string,string>me={ {"A","A"},{"E","3"},{"H","H"},{"I","I"},{"J","L"},{"L","J"},{"M","M"},{"O","O"},{"S","2"},{"T","T"},{"U","U"},{"V","V"},{"W","W"},{"X","X"},{"Y","Y"},{"Z","5"},{"1","1"},{"2","S"},{"3","E"},{"5","Z"},{"8","8"} };
map<string,string>::iterator it;


bool isitpalindrome(string s){
  string rev;
  int i;
  for(i=s.size()-1;i>=0;i--){
      rev+=s[i];
  }
  if(s==rev){
      return true;
  }
  return false;
}
bool isitmirroedsting(string s){
  string rev,temp;
  int x=0;
  bool flag=false;
  int i;
  for(i=s.size()-1;i>=0;i--){
      temp=s[i];
      it=me.find(temp);
      if(it!=me.end()){
          //temp=it->second;
          rev+=it->second;
          flag=true;
          
      }
      temp.clear();
  }
  if(rev==s&&flag){
      return true;
  }
  return false;

}

int main(){
 string s;
 while (cin>>s)
 {
     
     if(isitpalindrome(s)&&!isitmirroedsting(s)){
        cout<<s<<" -- is a regular palindrome.\n";
     }else if(!isitpalindrome(s)&&isitmirroedsting(s)){
         cout<<s<<" -- is a mirrored string.\n";
     }else if(isitpalindrome(s)&&isitmirroedsting(s)){
         cout<<s<<" -- is a mirrored palindrome.\n";
     }else
     {
         cout<<s<<" -- is not a palindrome.\n";
     }
     cout<<endl;
 }
 

return 0;

}
