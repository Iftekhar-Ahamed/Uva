#include<bits/stdc++.h>
#define SIZE 32
using namespace std;
//Vsriables
int i,j,k,start_r,start_c,end_r,end_c,start_level,end_level;
bool data[SIZE][SIZE][SIZE];
int level[SIZE][SIZE][SIZE];
//Functions
void take_input(int n,int r,int c);
int bfs(int n,int row,int collum);

int main(){
    //freopen("in.txt","r",stdin);
    int n,r,c;
    while (cin>>n>>r>>c)
    {
        cin.ignore();
        start_c=start_r=end_c=end_r=0;

        if(n==r&&r==c&&c==0)break;
        take_input(n,r,c);
        n=bfs(n,r,c);
        if(n==-1)cout<<"Trapped!"<<endl;
        else printf("Escaped in %d minute(s).\n",n);
    }

    return 0;
}

void take_input(int n,int r,int c){
    char ch;
    for(i=0;i<n;i++){
            for(j=0;j<r;j++){
                for(k=0;k<c;k++){
                    scanf("%c",&ch);
                    if(ch=='#')data[i][j][k]=true;
                    else if(ch=='.')data[i][j][k]=false;
                    else if(ch=='S'){
                        start_r=j;
                        start_c=k;
                        start_level=i;
                    }else{
                        end_r=j;
                        end_c=k;
                        end_level=i;
                    }
                }
                getchar();
            }
        getchar();
        }
}
int bfs(int n,int row,int collum){
    memset(level,0,sizeof level);
    level[start_level][start_r][start_c]=0;
    data[start_level][start_r][start_c]=false;
    data[end_level][end_r][end_c]=false;

    queue<pair<int,pair<int,int>>>trace;
    trace.push({start_level,{start_r,start_c}});
    int v_level,v_r,v_c,l,r,c;

    while (!trace.empty())
    {
        v_level=trace.front().first;
        v_r=trace.front().second.first;
        v_c=trace.front().second.second;
        trace.pop();

        if(!data[v_level][v_r][v_c]){
            data[v_level][v_r][v_c]=true;

            //uporer_shiri
            l=v_level+1;r=v_r;c=v_c;
            if(!data[l][r][c]&&l<n){
                level[l][r][c]=level[v_level][v_r][v_c]+1;
                trace.push({l,{r,c}});
            }
            if(l==end_level&&r==end_r&&c==end_c)
                return level[l][r][c];

            //nicer_shiri
            l=v_level-1;r=v_r;c=v_c;
            if(!data[l][r][c]&&l>=0){
                level[l][r][c]=level[v_level][v_r][v_c]+1;
                trace.push({l,{r,c}});
            }
            if(l==end_level&&r==end_r&&c==end_c)
                return level[l][r][c];

            //down
            l=v_level;r=v_r+1;c=v_c;
            if(!data[l][r][c]&&r<row){
                level[l][r][c]=level[v_level][v_r][v_c]+1;
                trace.push({l,{r,c}});
            }
            if(l==end_level&&r==end_r&&c==end_c)
                return level[l][r][c];

            //up
            l=v_level;r=v_r-1;c=v_c;
            if(!data[l][r][c]&&r>=0){
                level[l][r][c]=level[v_level][v_r][v_c]+1;
                trace.push({l,{r,c}});
            }
            if(l==end_level&&r==end_r&&c==end_c)
                return level[l][r][c];

            //left
            l=v_level;r=v_r;c=v_c+1;
            if(!data[l][r][c]&&c<collum){
                level[l][r][c]=level[v_level][v_r][v_c]+1;
                trace.push({l,{r,c}});
            }
            if(l==end_level&&r==end_r&&c==end_c)
                return level[l][r][c];

            //right
            l=v_level;r=v_r;c=v_c-1;
            if(!data[l][r][c]&&c>=0){
                level[l][r][c]=level[v_level][v_r][v_c]+1;
                trace.push({l,{r,c}});
            }
            if(l==end_level&&r==end_r&&c==end_c)
                return level[l][r][c];
        }

    }
    return -1;
}
