#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt","r",stdin);

int n,m,g,i,j,c=0;
bool flag=true;
while(scanf("%d%d",&n,&m)==2){

    for(c=0,i=0;i<n;i++){
        flag=true;
        for(j=0;j<m;j++){
            scanf("%d",&g);
            if(g==0)flag=false;
        }
        if(flag)c++;
    }

    printf("%d\n",c);
}

return 0;
}
