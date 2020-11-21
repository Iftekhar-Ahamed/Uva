#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,mov,prev,sum,i,set=0;
    vector<int>number;
    bool flag= true;
    while (scanf("%d",&t)&&t!=0){
        sum=mov=0;
        number.resize(t);
        number.clear();
        for(i=0;i<t;i++){
            scanf("%d",&number[i]);
            sum+=number[i];
        }
        sum/=t;
        for(i=0;i<t;i++){
            if(number[i]>sum){
            mov+=(number[i]-sum);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++set,mov);
    }
    return 0;
}
