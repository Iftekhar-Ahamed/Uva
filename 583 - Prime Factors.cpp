#include <iostream>
#include <vector>
#include <math.h>
#define SIZE sqrt(pow(2,31))+2
using namespace std;
vector<bool>prime_check(SIZE);
vector<int>prime;

void build_prime(){
    long long int i,j,k;
    for(i=2;i<=SIZE;i++){
        if(!prime_check[i]){
            for(j=i*i;j<=SIZE;j+=i){
                if(!prime_check[j]){
                    prime_check[j]= true;
                }
            }
            prime.push_back(i);
        }
    }
}
int main(){
    build_prime();
    long long int number;
    int n=prime.size();
    while (scanf("%lld",&number)&&number!=0){

        bool first=true;
        printf("%lld = ",number);
        if(number<0){
            number*=-1;
            printf("-1 x ");
        }
        for (int i = 0; prime[i] <= number && i<n && number!=1 ; ++i) {
            while (number%prime[i]==0){
                if(first){
                    printf("%d",prime[i]);
                    number/=prime[i];
                    first= false;
                } else{
                    printf(" x %d",prime[i]);
                    number/=prime[i];
                }
            }
        }
        if(number!=1)printf("%lld",number);
        printf("\n");
    }

    return 0;
}
