#include <bits/stdc++.h>
using namespace std;
int data[101][101];
void input(int n,int row[],int collum[]){
    int i,j;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            cin>>data[i][j];
            collum[j]+=data[i][j];
            row[i]+=data[i][j];
        }
    }   
}
bool notpossible(int x,int row[],int collum[],int &m,int &n){
    int i,count1=0,count2=0;

    for(i=0;i<x;i++){
        if(row[i]%2!=0){
            count1++;
            m=i;
        }
        if(collum[i]%2!=0){
            count2++;
            n=i;
        }
    }

    if(count1>1 || count2>1)return true;

    return false;

}
int main(){
    int n;
    while (cin>>n&&n!=0)
    {
        int row[n],collum[n],x=-1,y=-1;
        memset(row,0,sizeof row);
        memset(collum,0,sizeof collum);
        input(n,row,collum);

        if(notpossible(n,row,collum,x,y)){
            cout<<"Corrupt\n";
        }else if(x==y && x==-1){
            cout<<"OK\n";
        }else{
            printf("Change bit (%d,%d)\n",x+1,y+1);
        }
        
    }
    return 0;
    
}
