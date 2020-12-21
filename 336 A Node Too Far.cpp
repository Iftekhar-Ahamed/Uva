#include<bits/stdc++.h>
using namespace std;

int Case=0;
map<string,vector<string>>Node;
map<string,vector<string>>::iterator it2;
map<string,int>level;

void solve(string node,int power){

    level.clear();
    level[node]=1;
    queue<string>trace;
    map<string,bool>visit;
    visit[node]=true;

    trace.push(node);
    int i=0;
    string tem;
    while (!trace.empty())
    {
        tem=trace.front();
        for(i=0;i<Node[tem].size();i++){
            if(!visit[Node[tem][i]]){
                level[Node[tem][i]]=level[tem]+1;
                visit[Node[tem][i]]=true;
                trace.push(Node[tem][i]);
            }
        }
        trace.pop();
    }
    int count=0;
    for(it2=Node.begin();it2!=Node.end();it2++){
        if(level[it2->first]<=power&&level[it2->first]!=0)count++;
    }
    //cout<<Node.size()<<endl;
    cout<<"Case "<<Case<<": "<<Node.size()-count<<" nodes not reachable from node "<<node<<" with TTL = "<<power-1<<"."<<endl;
    //printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",Case,Node.size()-count,node,power);
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int i,n;
    string a,b;
    while (1)
    {
        cin>>n;
        if(n==0)break;

        Node.clear();

        while (n--)
        {
            cin>>a>>b;
            Node[a].push_back(b);
            Node[b].push_back(a);

        }

        while (cin>>a>>i&&a!="0")
        {
            Case++;
            solve(a,i+1);

        }


    }

    return 0;
}
