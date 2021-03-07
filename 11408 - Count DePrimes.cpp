#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define mxS 5000001
vector<int>_prime;
ll deprime[mxS+1];
bool prime[mxS+1];
void sive(){
	ll i,j;
	
	prime[1]=true;
	prime[0]=true;
	for(i=4;i<=mxS;i+=2)prime[i]=true;

	for(i=3;i*i<=mxS;i+=2){
	     if(!prime[i])
		   for(j=i*i;j<=mxS;j+=i+i)prime[j]=true;
	}
	for(i=2;i<=mxS;i++)if(!prime[i])_prime.push_back(i);
	//cout<<_prime.size()<<endl;
}
int prime_factor(int num){
	if(!prime[num])return 1;

        int i,sum=0;
	for(i=0;_prime[i]*_prime[i]<=num;i++){
		if(num%_prime[i]==0){
		while(num%_prime[i]==0){
			num/=_prime[i];
		}
		sum+=_prime[i];
		}
	}
	if(num!=1)sum+=num;
	if(!prime[sum])return 1;
	return 0;
}
void build_deprime(){
	sive();
	int i;
	ll total=0;
	deprime[1]=0;
	for(i=2;i<=mxS;i++){
		total+=prime_factor(i);
		deprime[i]=total;
	}
}

int main(){
	build_deprime();
	int l,r;
	while(1){
		scanf("%d",&l);
		if(l==0)break;
	        scanf("%d",&r);
		printf("%lld\n",deprime[r]-deprime[l-1]);
	}
	
return 0;
}
