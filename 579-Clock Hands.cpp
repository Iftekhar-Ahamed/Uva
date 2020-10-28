#include<iostream>

using namespace std;

int main(){

    double m,h;
    double hA,mA;
    char ch;

    while(1){

        scanf("%lf%c%lf",&h,&ch,&m);

        if(h==0 && m==0) break;

        hA=(h*30+(m/60)*30)-(m*6);
        

        if(hA<0){
            hA*=-1;
        }
        if (hA>180){
            hA=360-hA;
        }
        printf("%.3f\n",hA);
    }

    return 0;
}
