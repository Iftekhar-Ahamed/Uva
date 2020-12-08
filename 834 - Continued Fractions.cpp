#include<bits/stdc++.h>
using namespace std;
void remove(int &x,int &y){
   if(x<0)x*=-1;
   if(y<0)y*=-1;
}
ostream &operator << (ostream &out,vector<int> ob){
   int i=1,n=ob.size();
   if(n==1){
     out<<"["<<ob[0]<<"]"<<endl;
   }else
   {
      out<<"["<<ob[0]<<";";
      for(i=1;i<n-1;i++){
          out<<ob[i]<<",";
      }
     out<<ob[n-1]<<"]"<<endl;
   }
   
   
   return out;
}
int main(){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);

   int numerator,denominator,quotient,temp;
   while(scanf("%d%d",&numerator,&denominator)==2){
    remove(denominator,numerator);
    if(denominator==0){
        cout<<"[]"<<endl;
        continue;
    }else if(numerator==0)
    {
      cout<<"[0]"<<endl;
    }
    else{
      vector<int>number;
    while(denominator>0&&numerator>0){
        quotient=numerator/denominator;
        number.push_back(quotient);
        numerator=numerator-(quotient*denominator);
        swap(numerator,denominator);
      }
      cout<<number;  
   }
}
    
   return 0;
}
