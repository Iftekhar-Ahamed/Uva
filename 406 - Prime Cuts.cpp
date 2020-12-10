#include<bits/stdc++.h>
using namespace std;
vector<int>Prime;
void primE(){
int i,j;
bool prime[1001];
memset(prime,true,sizeof(prime));
Prime.push_back(1);
for(i=2;i<1001;i++){
    if(prime[i]){
        Prime.push_back(i);
        for(j=i*i;j<1001;j+=i){
            if(prime[j]){
                prime[j]=false;
            }
        }
    }
}
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    primE();
    int n,c,i,siz;

    while(scanf("%d%d",&n,&c)==2){
        list<int>l;
        for(i=0;Prime[i]<=n&&i<Prime.size();++i){
            l.push_back(Prime[i]);
        }
        if(l.size()%2==0){
            while(l.size()>c*2){
                l.pop_front();
                l.pop_back();
            }
        }else{
           while(l.size()>(c*2-1)){
                l.pop_front();
                l.pop_back();
            }

        }
        printf("%d %d:",n,c);
        while(!l.empty()){
            cout<<" "<<l.front();
            l.pop_front();
        }
        printf("\n\n");
    }
    printf("\n");
    return 0;
}
