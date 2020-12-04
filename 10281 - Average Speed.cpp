#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

int main(){
   string data;
   stringstream s;
   char ch;
   double hour,min,sec,time,speed,prev_speed=0.0,now=0.0,prev=0.0,ans=0.0;
   while (getline(cin,data)){
      s<<data;
      hour=min=sec=speed=0.0;
      s>>hour>>ch>>min>>ch>>sec>>speed;
      now=hour+min/60.0+sec/3600.0;
      //cout<<hour<<" "<<min<<" "<<sec<<" "<<speed<<" "<<prev_speed<<endl;
      if(data.size()<=8){
         ans+=(now-prev)*prev_speed;
         cout<<data<<" "<<fixed<<setprecision(2)<<ans<<" km"<<endl;
      }else
      {
         ans+=(now-prev)*prev_speed;
         prev_speed=speed;
      }
      prev=now;
      s.clear();
      data.clear();
   }
   
   return 0;

}
