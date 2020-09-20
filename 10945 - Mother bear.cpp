#include <iostream>
#include <string>
using namespace std;

class str{
    string s;

public:
    str(){
        s="";
    }
    void setStr(string x){
        s=x;
    }
    bool isItpalindrome()
    {
        int l=s.size(),i=0,j=0;
        for(i=0,j=l-1;i<l;i++,j--)
            if(s[i]!=s[j])return false;
        return true;
    }

};
string convertLower(string x){
      int length=x.size(),i=0;
      char t;
      for(i=0;i<length;i++){
          if((x[i]<'a'||x[i]>'z')&&(x[i]<'A'||x[i]>'Z')) {
              x.erase(i,1);--i;length--;
          }else if(x[i]<'a'||x[i]>'z'){
              x[i]+=32;
          }
      }
    return x;
}
int main()
{
    str ob;
    string temp;
    int l;
    while (1)
    {
       getline(cin,temp);
       if(temp=="DONE")break;
       temp=convertLower(temp);
       ob.setStr(temp);
       if(ob.isItpalindrome()){
           cout<<"You won't be eaten!"<<endl;
       } else{
           cout<<"Uh oh.."<<endl;
       }

   }
    return 0;
}
