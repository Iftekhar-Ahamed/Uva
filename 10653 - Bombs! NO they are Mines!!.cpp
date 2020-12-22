#include<bits/stdc++.h>
using namespace std;
int R[] = {0,0,1,-1};
int C[] = {1,-1,0,0};

int visit[1010][1010];
int level[1010][1010];
int position_of_row,position_of_colloum,destination_of_row,destination_of_colloum;
int r,c,n;

void zero(){
    int i,j;
    for(i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            level[i][j]=0;
            visit[i][j]=0;
        }

    }
}


void solve(){
    visit[position_of_row][position_of_colloum]=1;
    level[position_of_row][position_of_colloum]=0;

    queue<pair<int,int>>trace;
    trace.push({position_of_row,position_of_colloum});

    int x,y,i,xx,yy;

    while (!trace.empty())
    {
        x=trace.front().first;
        y=trace.front().second;
        
        for(i=0;i<4;i++){

            xx = x+R[i];
            yy = y+C[i];

            if(visit[xx][yy]==0&&xx>=0&&xx<r&&yy>=0&&yy<c){
                visit[xx][yy]=1;
                level[xx][yy]=level[x][y]+1;
                if(xx==destination_of_row&&yy==destination_of_colloum){
                    printf("%d\n",level[xx][yy]);
                    return ;
                }
                trace.push({xx,yy});
            }

        }

        trace.pop();
        
    }
    
}


int main(){
   // freopen("in.txt","r",stdin);

    int x,y,m;

    while(scanf("%d%d",&r,&c)==2&&r!=0&&c!=0){
        zero();
        scanf("%d",&n);
        while (n--)
        {
            scanf("%d",&x);
            scanf("%d",&m);
            while (m--)
            {
                scanf("%d",&y);
                visit[x][y]=1;
            }
        }
        scanf("%d%d",&position_of_row,&position_of_colloum);
        scanf("%d%d",&destination_of_row,&destination_of_colloum);
        solve();
    }
    return 0;
}
