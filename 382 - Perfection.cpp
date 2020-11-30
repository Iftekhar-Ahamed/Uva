#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
ostream &my(ostream &stream){
    stream<<setfill(' ')<<setw(5);
    return stream;
}
int calculation(int n,int condition){
    int sum=1,i;
    for(i=2;i<=condition;i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i)sum+=n/i;
        }
    }
    return sum;
}
int main(){
    int list[101],i,j,k,sum;
    for(i=0;;i++){
        scanf("%d",&list[i]);
        if(list[i]==0){
            break;
        }
    }
    printf("PERFECTION OUTPUT\n");
    for(j=0;j<i;j++){
        if(list[j]==1)cout<<my<<list[j]<<"  DEFICIENT\n";
        else {
            sum=calculation(list[j],sqrt(list[j]));
            if(sum==list[j]){
                cout<<my<<list[j]<<"  PERFECT\n";
            } else if(sum<list[j]){
                cout<<my<<list[j]<<"  DEFICIENT\n";
            } else{
                cout<<my<<list[j]<<"  ABUNDANT\n";
            }
        }
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}
