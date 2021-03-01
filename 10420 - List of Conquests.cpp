#include<bits/stdc++.h>
#define lld long long int
using namespace std;
map<string,int>data;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s,buffer;
    lld t;
    cin>>t;
    while (t--)
    {
        cin>>s;
        getline(cin,buffer);
        data[s]++;
    }
    for(auto it=data.begin();it!=data.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
