#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

int main(){
   double p,a,b,c,d,n,now,pev=0,dis=0,max=0,pev_dis=0;
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
   int i;
   while (cin>>p>>a>>b>>c>>d>>n){
      pev=dis=max=pev_dis=0;
      pev=p*(sin(a*1+b)+cos(c*1+d)+2);
      for(i=2;i<=n;i++){
         //   cout<<i<<" ";
          now=p*(sin(a*i+b)+cos(c*i+d)+2);
         // printf("%.2lf %.2lf  %.2lf ",pev,now,pev-now);
          dis+=pev-now;
         // printf(" %.2lf\n\n",dis);
           if(pev_dis>max){
              max=pev_dis;
           }
          if(dis<=0){
            pev=0;
            dis=0;
          }
          pev=now;
          pev_dis=dis;
      }
       if(pev_dis>max){
              max=pev_dis;
           }
      printf("%lf\n",max);
   }
   return 0;

}
