#include<bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define lld long long int
using namespace std;
void solve(string s){
    int i,j,n,tem;
    double x=sqrt(s.size());
    n=x;
    if(n!=x){
        printf("INVALID\n");
        return;
    }
    for(i=0;i<n;i++){
        tem=x-1;
        j=i;
        printf("%c",s[i]);
        while (tem--)
        {
            j=j+n;
            printf("%c",s[j]);
        }
        
    }
    printf("\n");
}
int main(){
    //read;write;
    string s;
    lld t,i;
    scanf("%lld",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        getline(cin,s);
        solve(s);
    }

    return 0;
}
