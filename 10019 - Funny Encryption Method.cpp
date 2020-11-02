#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string binary_c(int number){
    string num;
    while (number>0)
    {
       num+=to_string(number%2);
       number=number/2;
    }
    return num;
}
string hexT0binary(int number){
    int num,temp,i;
    string s1,s2;
    while (number>0)
    {
       num=number%10;
       s1=binary_c(num);
       if(s1.size()<4){
         temp=4-s1.size();
         for(i=0;i<temp;i++){
             s2+=to_string(0);
         }
       }
       s2+=s1;
       number=number/10;
    }
    return s2;
}
int counti(string number){
    int i,count=0;
    for(i=0;i<number.size();i++){
            if(number[i]=='1')count++;
         }
         return count;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int number;
       string binary,one_s_com;
       cin>>number;
       cout<<counti(binary_c(number))<<" "<<counti(hexT0binary(number))<<endl; 
    }
    return 0;
}
