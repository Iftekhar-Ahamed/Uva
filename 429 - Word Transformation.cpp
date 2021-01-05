#include <bits/stdc++.h>
using namespace std;
vector<string>word;
string init,trans;

bool differ(string init,string future){
    int i,n=init.size(),count=0;
    for(i=0;i<n;i++)if(init[i]!=future[i])count++;
    if(count==1)return true;
    return false;
}
int solve(){
    queue<pair<string,int>>trace;
    map<string,bool>visit;
    visit.clear();
    trace.push({init,0});
    string temp;
    int i,n=word.size(),w_s=init.size(),level=0;
    while(!trace.empty()){
        temp=trace.front().first;
        level=trace.front().second;
        trace.pop();
        if(!visit[temp]){
           visit[temp]=true;
           for(i=0;i<n;i++){
               if(word[i].size()==w_s&&!visit[word[i]]){
                    if(differ(word[i],temp)){

                        if(word[i]==trans){
                            return level+1;
                        }
                        trace.push({word[i],level+1});
                    }
                }
           }
        }
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    string s;
    cin>>n;
    while(n--){
        word.clear();
        while(cin>>s&&s!="*")word.push_back(s);
        cin.ignore();
        while(getline(cin,s)&&s!=""){
            stringstream ss(s);
            ss>>init>>trans;
            if(init==trans)cout<<init<<" "<<trans<<" "<<0<<endl;
            else cout<<init<<" "<<trans<<" "<<solve()<<endl;
        }
        if(n!=0)cout<<endl;
    }
return 0;
}

