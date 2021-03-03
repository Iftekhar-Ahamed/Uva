#include<bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
using namespace std;
bool number_naki(string s){
    if(s[0]<='9'&&s[0]>='0')return true;
    return false;
}
bool check_valid(int x){
    if((x>='A'&&x<='Z')||(x>='a'&&x<='z')|| x== 32 || x== 33|| x== 44 || x== 46|| x== 58|| x== 59|| x== 63)return true;
    return false;
}
void solve_for_number(string s){
    string temp;
    reverse(s.begin(),s.end());
    int i,j,n=s.size(),x=10;
    for(i=0;i<n;i+=2){
        x*=s[i]-'0';
        x+=s[i+1]-'0';
        if(check_valid(x))
        printf("%c",x);
        else{
            ++i;
            x*=10;
            x+=s[i+1]-'0';
            printf("%c",x);
        }
        x=10;
    }
    cout<<endl;
}
void solve_for_char(string s){
    string temp;
    int i,n=s.size(),x=0;
    for(i=0;i<n;i++){
        x=s[i];
        temp+=to_string(x);
    }
    reverse(temp.begin(),temp.end());
    cout<<temp<<endl;
}
int main(){
    //read;write;
    string s;
    while (getline(cin,s))
    {
        if(number_naki(s)){
            solve_for_number(s);
        }else{
            solve_for_char(s);
        }
        s.clear();
    }
    return 0;
}
