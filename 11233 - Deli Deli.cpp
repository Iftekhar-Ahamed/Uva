#include<iostream>
#include <map>
using  namespace  std;
bool check_constant(string s){
    if(s[s.size()-2]=='a'||s[s.size()-2]=='e'||s[s.size()-2]=='i'||s[s.size()-2]=='o'||s[s.size()-2]=='u'){
        return false;
    } else{
        return true;
    }
}
void calculate(string s){
    if(s[s.size()-1]=='y'&&check_constant(s)){
        s.erase(s.size()-1,1);
        s=s+"ies";
        cout<<s<<endl;
    } else if(s[s.size()-1]=='o'||s[s.size()-1]=='s'||(s[s.size()-2]=='c'&&s[s.size()-1]=='h')||s[s.size()-1]=='x'||(s[s.size()-2]=='s'&&s[s.size()-1]=='h')||(s[s.size()-2]=='e'&&s[s.size()-1]=='s')){
        s=s+"es";
        cout<<s<<endl;
    } else{
        s=s+"s";
        cout<<s<<endl;
    }
}
int main(){
    int m_size,n,i;
    cin>>m_size>>n;
    string w1,w2,w;
    map<string,string>irr;
    map<string,string>::iterator it;
    for(i=0;i<m_size;i++){
        cin>>w1>>w2;
        irr.insert(make_pair(w1,w2));
    }
    for(i=0;i<n;i++){
        cin>>w;
        it=irr.find(w);
        if(it!=irr.end()){
            cout<<it->second<<endl;
        } else{
          calculate(w);
        }
    }
    return 0;
}
