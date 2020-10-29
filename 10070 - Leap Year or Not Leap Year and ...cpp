#include<iostream>
using namespace std;
bool calculate(string s,int x){
int i=0,mod=0;
for(i=0;i<s.size();i++){
   mod=(mod*10+(s[i]-'0'))%x;
}
if(mod==0)return true;
else
{
    return false;
}
}
int main(){
    string s;
    bool leaf=false,ord=false;

    
    while (cin>>s)
    { 
        if(ord) cout<<endl;
        leaf=false,ord=false;
        if( (calculate(s,4) && !calculate(s,100)) || calculate(s,400)){
            cout<<"This is leap year."<<endl;
            leaf=true;
            ord=true;
        }
        if(calculate(s,15)){
            cout<<"This is huluculu festival year."<<endl;
            ord=true;
        }
        if(leaf&&calculate(s,55)){
            cout<<"This is bulukulu festival year."<<endl;
            ord=true;
        }
        if(!leaf&&!ord){
            cout<<"This is an ordinary year."<<endl<<endl;
        }
       
    }
    return 0;
    
}
