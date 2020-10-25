#include<iostream>
#include<string>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int n,j=0;
    int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
    cin>>n;
    while (n--)
    {
      string number;
      number=to_string(++j);
      int len=number.size();
      int i=0;
      while(len--){
        if(number[i]=='0')n0++;
        else if(number[i]=='1')n1++;
        else if(number[i]=='2')n2++;
        else if(number[i]=='3')n3++;
        else if(number[i]=='4')n4++;
        else if(number[i]=='5')n5++;
        else if(number[i]=='6')n6++;
        else if(number[i]=='7')n7++;
        else if(number[i]=='8')n8++;
        else n9++;
        i++;
    }
    }
    
    
    cout<<n0<<" "<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<" "<<n6<<" "<<n7<<" "<<n8<<" "<<n9<<endl;
}
return 0;
}
