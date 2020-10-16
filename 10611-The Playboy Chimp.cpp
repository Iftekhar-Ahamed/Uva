#include<iostream>
using namespace std;
int G_H,l,h;

void lower_bit(int *arra,int high,int low,int &key){
    int middle=(high+low)/2;
    if(high>=low){
        if(arra[middle]==key){
            lower_bit(arra,middle-1,low,key);
            
        }else if(arra[middle]<key){
           low=middle+1;
           lower_bit(arra,high,low,key);
        }else if (arra[middle]>key)
        {
            high=middle-1;
            lower_bit(arra,high,low,key);
        }
    }else if (middle==low)
    { 
       cout<<"X ";
    }else
    {
        cout<<arra[middle]<<" ";
    }  
    
}
void Upper_bit(int *arra,int high,int low,int &key){
  int middle=(high+low)/2;
    if(high>=low){
        if(arra[middle]==key){
            Upper_bit(arra,high,middle+1,key);
            
        }else if(arra[middle]<key){
           low=middle+1;
           Upper_bit(arra,high,low,key);
        }else if (arra[middle]>key)
        {
            high=middle-1;
            Upper_bit(arra,high,low,key);
        }
    }else if (middle!=G_H-1)
    { 
       cout<<arra[middle+1]<<endl;
    }else
    {
        cout<<"X"<<endl;
    }  
}

void Binary_search(int *arra,int high,int low,int &key){
    int middle=(high+low)/2;
    if(high>=low){
        if(arra[middle]==key){
            lower_bit (arra,middle-1,low,key);
            Upper_bit(arra,high,middle+1,key);
            
        }else if(arra[middle]<key){
           low=middle+1;
           Binary_search(arra,high,low,key);
        }else if (arra[middle]>key)
        {
            high=middle-1;
            Binary_search(arra,high,low,key);
        }
    }else if (middle!=G_H-1)
    {
        
       cout<<arra[middle]<<" "<<arra[middle+1]<<endl;
    }
    
    else
    {
        cout<<arra[middle]<<" "<<"X"<<endl;
    }  
}


int main(){
    int B_H;
    cin>>G_H;
    int G_arra[G_H];
    for(int i=0;i<G_H;i++){
        cin>>G_arra[i];
    }
    int i=0;
    cin>>B_H;
    while (i<B_H)
    {
        int key,low=0;
        int high=G_H-1;
        cin>>key;
        Binary_search(G_arra,high,low,key);
        i++; 
    }
    
    return 0;
}
