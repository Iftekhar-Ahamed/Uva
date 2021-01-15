#include <bits/stdc++.h>
using namespace  std;
void make0(int arra[],int n)
{
   for(int i=0;i<n;i++)arra[i]=0;
}
void max_cal(int arra[],int n,int &max,int &pos){
    int i;
    max=arra[0];
    pos=0;
    for(i=1;i<n;i++){
        if(max<arra[i]){
            pos=i;
            max=arra[i];
        }
    }
}
void bfs(int x,vector<int>list[],int n){
    queue<int>trace;
    trace.push(x);
    map<int,bool>visit;
    visit[x]= true;
    int level[n],i;
    make0(level,n);
    level[x]=0;
    while (!trace.empty()){
        x=trace.front();
        for(i=0;i<list[x].size();i++){
            if(!visit[list[x][i]]){
                visit[list[x][i]]= true;
                level[list[x][i]]=level[x]+1;
                trace.push(list[x][i]);
            }
        }
        trace.pop();
    }
    int count[n];
    make0(count,n);
    for(i=0;i<n;i++){
        if(level[i]!=0)count[level[i]]++;
    }
    int max,pos;
    max_cal(count,n,max,pos);
    if(max==0)printf("0\n");
    else{
        printf("%d %d\n",max,pos);
    }
}
int main(){
        int i,n,m,j,temp;
        cin>>n;
        vector<int>list[n];

        //input part:-
        for(i=0;i<n;i++){
            cin>>m;
            for(j=0;j<m;j++){
                cin>>temp;
                list[i].push_back(temp);
            }
        }

        //calculation part:-
        cin>>m;
        while (m--){
            cin>>temp;
            bfs(temp,list,n);
        }
        
    return 0;
}
