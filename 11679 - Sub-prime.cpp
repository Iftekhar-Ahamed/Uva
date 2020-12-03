#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>reserv;
   int bank,dena_potro,i,A,B,V;
   bool flag=true;
   while (scanf("%d%d",&bank,&dena_potro)==2)
   {
      if(bank==0&&dena_potro==0)break;
      flag=true;
      reserv.clear();
      reserv.resize(bank);
      for(i=0;i<bank;i++){
         scanf("%d",&reserv[i]);
      }
      for(i=0;i<dena_potro;i++){
      scanf("%d%d%d",&A,&B,&V);
      reserv[A-1]-=V;
      reserv[B-1]+=V;
      }
      for(i=0;i<bank;i++){
       if(reserv[i]<0){
           printf("N\n");
           flag=false;
           break;
       }
      }
      if(flag){
        printf("S\n");
      }
   }
   
   return 0;

}
