#include<bits/stdc++.h>
using namespace std;
map<string,vector<string>>road;
map<string,bool>visit;
map<string,string>level;
string solve(string now,string des){
    visit.clear();
    level.clear();
    visit[now]=true;
    queue<string>trace;
    level[now]+=now[0];
    trace.push(now);
    int i;
    while (!trace.empty())
    {
        now=trace.front();
        trace.pop();
        for(i=0;i<road[now].size();i++){
            if(!visit[road[now][i]]){
                visit[road[now][i]]=true;
                level[road[now][i]]=level[now]+road[now][i][0];
                trace.push(road[now][i]);
                if(road[now][i]==des)return level[road[now][i]];
            }
        }
    }
    return "";
}
int main(){
    int i,n,t,q;
    string city1,city2;
    cin>>t;
    while (t--)
    {
        cin>>n>>q;
        road.clear();
        while (n--)
        {
            cin>>city1>>city2;
            road[city1].push_back(city2);
            road[city2].push_back(city1);
        }
        while (q--)
        {
            cin>>city1>>city2;
            cout<<solve(city1,city2)<<endl;
        }
       if(t!=0) cout<<endl;

    }

    return 0;
}
