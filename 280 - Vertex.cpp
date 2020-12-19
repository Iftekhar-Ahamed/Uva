#include<bits/stdc++.h>
using namespace std;
int n;
map<int,vector<int>>Node;
map<int,vector<int>>::iterator it;
void make_false(bool visit[]){
    int i;
    for(i=1;i<n;i++){
        visit[i]=false;
    }
}
void solve(int node){
    bool visit[n];
    int i,temp;

    make_false(visit);
    queue<int>trace;
    trace.push(node);

    while (!trace.empty())
    {
        temp=trace.front();
        //it=Node[temp];
        for(i=0;i<Node[temp].size();i++){
            if(!visit[Node[temp][i]]){
                visit[Node[temp][i]]=true;
                trace.push(Node[temp][i]);
            }
        }
        trace.pop();
    }
    int count=0;
    for(i=1;i<n;i++){
        if(!visit[i])count++;
    }
    printf("%d",count);
     for(i=1;i<n;i++){
        if(!visit[i])printf(" %d",i);
    }
    printf("\n");
}

int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);


    int x,y,m,check;
    while (scanf("%d",&n)==1&&n!=0)
    {
        Node.clear();
        n+=1;
        while (scanf("%d",&x)==1&&x!=0)
        {
            while (scanf("%d",&y)==1&&y!=0)
            {
                Node[x].push_back(y);
            }
        }
        scanf("%d",&m);
        while (m--)
        {
            scanf("%d",&check);
            solve(check);
        }
    }
    return 0;
}
