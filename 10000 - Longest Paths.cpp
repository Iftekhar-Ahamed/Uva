#include <bits/stdc++.h>
using namespace std;
map<int,int> bfs(map<int,vector<int>>path,int s){
    map<int,int>level;
    level[s]=0;
    map<int,bool>visit;
    queue<int>trace;
    int temp,i;
    trace.push(s);
    while (!trace.empty()){
        temp=trace.front();
        trace.pop();
        visit[temp]= false;
        for(i=0;i<path[temp].size();i++){
            if(level[temp]+1>level[path[temp][i]]){
                level[path[temp][i]]=level[temp]+1;
                if(!visit[path[temp][i]]){
                    visit[path[temp][i]]= true;
                    trace.push(path[temp][i]);
                }
            }
        }
    }
    return  level;
}
int main()
{
	int n, x, b, a,i,pos,c=0;
	bool flag= false;
	while (cin >> n)
	{
	    int max=-1;
		if(n==0)break;
		map<int,vector<int>> path;
		cin >> x;
		while (cin >> a >> b)
		{
			if (a == 0 && b == 0)
				break;

			path[a].push_back(b);
		}
		map<int,int>level;
        map<int,int>::iterator it;
		level=bfs(path,x);
		for(it=level.begin();it!=level.end();it++){
		    if(max<it->second){
		        max=it->second;
		        pos=it->first;
		    }
		}
		printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",++c,x,max,pos);

	}

	return 0;
}
