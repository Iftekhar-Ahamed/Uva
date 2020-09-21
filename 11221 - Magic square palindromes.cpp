#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class str{
    string s;
    int S;
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
    bool isItsquare(){
        int l=s.size();
        double x;
        x=sqrt(l);
        S=x;
        if(S==x)return true;
        else return false;
    }
    int getS(){
        return S;
    }

};
string deletePantuation(string x){
      int length=x.size(),i=0;
      for(i=0;i<length;i++){
          if((x[i]<'a'||x[i]>'z')&&(x[i]<'A'||x[i]>'Z')) {
              x.erase(i,1);--i;length--;
          }
          }
    return x;
}
int main()
{
    str ob;
    string temp;
    int t,i=1;
    cin>>t;
    getchar();
    while (i<=t)
    {
       getline(cin,temp);
       temp=deletePantuation(temp);
       ob.setStr(temp);

       if(ob.isItpalindrome()&&ob.isItsquare()){
           cout<<"Case #"<<i<<":\n";cout<<ob.getS()<<endl;
       } else{
           cout<<"Case #"<<i<<":\n";cout<<"No magic :("<<endl;
       }
     i++;
   }
    return 0;
}
