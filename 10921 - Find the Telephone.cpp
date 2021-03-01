#include<bits/stdc++.h>
#define lld long long int
using namespace std;
map<char,int>data{
    {'A',2},{'B',2},{'C',2},
    {'D',3},{'E',3},{'F',3},
    {'G',4},{'H',4},{'I',4},
    {'J',5},{'K',5},{'L',5},
    {'M',6},{'N',6},{'O',6},
    {'P',7},{'Q',7},{'R',7},{'S',7},
    {'T',8},{'U',8},{'V',8},
    {'W',9},{'X',9},{'Y',9},{'Z',9},
};
void solve(string s){
    lld i,n=s.size();
    for(i=0;i<n;i++){
        if(data[s[i]]==0)cout<<s[i];
        else cout<<data[s[i]];
    }
    cout<<endl;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    while (cin>>s)
    {
        solve(s);
    }
    
}
