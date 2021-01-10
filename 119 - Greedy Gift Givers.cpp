#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int x,c,d,e,f,i,j;
    string s[100],g,h;
    map<string,int>hisab;
    bool flag=false;
    while(cin>>x)
    {
        hisab.clear();
        for(i=0; i<x; i++)
        {
            cin>>s[i];
            hisab[s[i]]=0;
        }
        for(i=0; i<x; i++)
        {
            cin>>g;
            cin>>c>>d;

            if(d!=0)
            {
                e=c/d;
                f=e*d;
                hisab[g]-=f;

                for(j=0; j<d; j++)
                {
                    cin>>h;
                    hisab[h]+=e;
                }
            }
        }
        if(flag) cout<<endl;
        for(i=0; i<x; i++)
        {
            cout<<s[i]<<" "<<hisab[s[i]]<<endl;
        }
        flag=true;
    }
    return 0;
}
