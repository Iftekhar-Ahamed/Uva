#include<iostream>
using namespace std;
int p=0;
void swap_int(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;

}
void sort_arra(int *arra,int &n){
     
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(arra[i]>arra[j]){
          swap_int(&arra[i],&arra[j]);
        }
      }
    }
}

void check_number(int *arra,int &key,int &high,int &low){
  if(high>=low){
    int middle;
    middle=(high+low)/2;
    if(arra[middle]>key){
      high=middle-1;
      check_number(arra,key,high,low);
    }else if (arra[middle]==key)
    {
      p=middle;
      high=middle-1;
      check_number(arra,key,high,low);
    }else{
      low=middle+1;
      check_number(arra,key,high,low);
    }
    
  }else
  {
    return;
  }
  
}


int main(){
  int test,query,j=0;
  
  while(cin>>test>>query){
      if(test==0&&query==0)break;
      j++;
      int arra[test];
      int i=0;
      while (i<test)
      {
        cin>>arra[i];
        i++;
      }
      sort_arra(arra,test);
      cout<<"CASE# "<<j<<":"<<endl;
      i=0;
      while (i<query)
      {
        int key,high=test-1,low=0;
        cin>>key;
        p=-1;
        check_number(arra,key,high,low);
        if(p!=-1){
          cout<<key<<" found at "<<p+1<<endl;
        }
        else
        {
          cout<<key<<" not found"<<endl;
        }
        
        i++;
      }
      
  }
  return 0;
}
