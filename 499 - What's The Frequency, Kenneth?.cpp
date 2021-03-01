#include<bits/stdc++.h>
#define lld long long int
using namespace std;
map<char,int>data;
void solve(string s){
    lld n=s.size(),i;
    for(i=0;i<n;i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))data[s[i]]++;
    }
    lld max=-1;
    for(auto it=data.begin();it!=data.end();it++){
        if(it->second>max)
            max=it->second;
    }
    for(auto it=data.begin();it!=data.end();it++){
        if(it->second==max)
            cout<<it->first;
    }

    cout<<" "<<max<<endl;
    data.clear();
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    while (getline(cin,s))
    {
        solve(s);
    }
    return 0;
}
