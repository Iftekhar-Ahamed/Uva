#include<bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define lld long long int
using namespace std;
void solve(string s){
    stringstream ss(s);
    char temp;
    int t;
    while (ss>>temp)
    {
        ss>>t;
        while (t--)
        {
            cout<<temp;
        }
    }
    printf("\n");
}
int main(){
    //read;write;
    string s;
    lld t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        cin>>s;
        printf("Case %lld: ",i);
        solve(s);
    }

    return 0;
}
