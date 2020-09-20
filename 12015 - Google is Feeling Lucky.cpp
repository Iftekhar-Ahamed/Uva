#include<iostream>
#include <string>
using namespace std;
int main()
{
    int n,t,k=1;
    cin>>n;
    while (n--)
    {
        string webName[10],temp;
        int rate,max=0,i=0;
        t=0;
        while (t<10){
            cin>>temp>>rate;
            if(max<rate){
                i=0;
                webName[i]=temp;
                max=rate;
            } else if(max==rate){
                i++;
                webName[i]=temp;
            }
            t++;
        }
        cout<<"Case #"<<k++<<":\n";
        int j=0;
        while (j<=i){
            cout<<webName[j]<<endl;
            j++;
        }

    }
    return 0;
}
