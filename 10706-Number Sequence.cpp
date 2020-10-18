#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
string seq;
int p;
vector<long long> record;
void build_sequence(){
    long int i=1,length=0,total_lenth=0,break_count=0;
    record.push_back(0);
    while (1)
    {
       seq=seq+to_string(i);
       length = (int)log10(i)+1;
       total_lenth+=length;
       break_count=total_lenth+record[i-1];
       record.push_back(break_count);
       if(record[i]>2147483690){
           break;
       }
       
       else  i++;
    }
}
void binary_search(int high,int low,int key){
    int middle;
    while (high>=low)
    {
        middle=(high+low)/2;
        if(record[middle]==key){
            p=middle;
            break;
        }
        if(record[middle]>key)//dicrise high
        {
            high=middle-1;
        }       
        if (record[middle]<key)//increase low 
        {
           low=middle+1;
        }   
    }
    if(record[middle]>=key){
       p=middle-1;
    }else
    {
      p=middle;   
    }
           
}
void show_value_in_position(int key){
     binary_search(record.size(),0,key);
     cout<<seq[key-record[p]-1]<<endl;   
    
}
int main(){
    build_sequence();
    int x,y;
    cin>>x;
    while (x--)
    {
       cin>>y;
       show_value_in_position(y);
    }

    return 0;
}
