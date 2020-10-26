#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>decode;
    map<string,int>::iterator it;
    
    int word;
    while(cin>>word)
{
    string encoded,temp;
     cin>>encoded;
     decode.clear();
     for(int i=0;i<encoded.size()-word+1;i++){
       temp=encoded.substr(i,word);
       it=decode.find(temp);
       if(it==decode.end()){
            decode.insert(pair<string,int>(temp,1));
       }else
       {
          it->second+=1;
       }
      }
    int max=0;
    for(it=decode.begin();it!=decode.end();it++){
        if(it->second>max){
            max=it->second;
           temp=it->first;
        }
    }
    cout<<temp<<endl;
}

return 0;
}
