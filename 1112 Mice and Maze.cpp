#include<bits/stdc++.h>
using namespace std;
#define lld long long int

int djk(lld e,lld t,vector<vector<pair<int,int>>>&g)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    q.push({0,e});
    lld count=0;
    vector<int>dis(g.size()+1,INT_MAX);
    dis[e]=0;
    while(!q.empty())
    {
        lld c= q.top().first,u =q.top().second;
        q.pop();

        for(auto it:g[u])
        {
            int node = it.first,nc=it.second;
            if((dis[node]>nc+c))
            {
                dis[node]=nc+c;
                q.push({c+nc,node});
            }
        }
    }
    for(auto it:dis){
        if(it<=t)count++;
    }
    return count;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    lld t;
    cin>>t;
    bool f=true;
    while(t--)
    {

        lld n,e,t,u,v,w,m;
        cin>>n>>e>>t>>m;
        vector<vector<pair<int,int>>>g(n+1);
        for(lld i=0; i<m; i++)
        {
            cin>>u>>v>>w;
            g[v].push_back({u,w});
        }

        if(f)
        {
            f=false;
        }
        else
        {
            cout<<endl;
        }
        cout<<djk(e,t,g)<<endl;
    }
    return 0;
}
