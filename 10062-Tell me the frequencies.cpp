#include<iostream>
#include <map>
#include <vector>
using namespace std;

void countFreq(string arr,int n){
    map<int,vector<int>>me;
    map<int,vector<int>>::iterator d;
    map<int,vector<int>>::iterator e;
    vector<int>temp;
    int cha[129]={0};
    int i,j,total=0;
    for(i=0;i<n;i++) {
        cha[int(arr[i])]++;
    }
    for(i=128;i>=0;i--) {

        if(cha[i]!=0){
            temp.push_back(i);
            for (j = i-1 ; j >= 0; j--) {
                if(cha[i]==cha[j]){
                    temp.push_back(j);
                    cha[j]=0;
                }

            }
            //sort(temp.begin(),temp.end());
            me.insert(pair<int,vector<int>>(cha[i],temp));
            temp.clear();
        }
    }
    //sort(me.begin(),me.end());
    for(d=me.begin();d!=me.end();d++){
        for(auto e=d->second.begin();e!=d->second.end();e++){
            cout<<*e<<" "<<d->first<<endl;
        }
    }
    }

int main(){
    string s;
    bool flag= false;
    while(getline(cin,s)){
        if(flag)cout<<endl;
        countFreq(s,s.size());
        flag= true;
    }

    return 0;
}
