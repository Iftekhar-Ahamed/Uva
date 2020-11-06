
#include<bits/stdc++.h>
using namespace std;
map<string,int>tree;
map<string,int>::iterator it;
int main()
{
    string tr;
    int t;
    cin>>t;
   getchar();
    getline(cin,tr);
    while(t--)
    {
        float total=0;
        int cnt=0;
        tree.clear();
        while(getline(cin,tr))
        {
            if(tr.size()==0)break;
            it=tree.find(tr);
            if(it==tree.end()){
                tree.insert(make_pair(tr,1));
            }else{
             it->second++;
            }
            total++;
        }
        for(it=tree.begin(); it!=tree.end(); it++)
        {
            double v=0;
            v=it->second;
            v=(v/total)*100.0;
            cout<<it->first<<" ";
            printf("%.4f\n",v);
        }
        if(t!=0)cout<<endl;
    }
    return 0;
}
