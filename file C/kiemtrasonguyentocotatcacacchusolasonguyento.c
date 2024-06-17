#include<stdio.h>
#include<math.h>
// Cach 1
//int prime(int n){
//	int i;
//	for(i=2;i<=sqrt(n);i++){
//		if(n%i==0)
//		return 0;
//	}
//	return n>1;
//}
int  prime[1000001];
void sieve() {
	int i,j;
	for(i=0;i<=1000000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(i=2;i<=1000;i++){
		if(prime[i]==1){
			for(j=i*i;j<=1000000;j+=i){
				 prime[j]=0;
			}
		}
	}
}
int digiPrime(int n){
	while(n) {
int r=n%10;
if(r!=2&&r!=3&&r!=5&&r!=7)
return 0;
n/=10;
	}
	return 1;
}
int main() {
//Cach 1	int t;
//	scanf("%d",&t);
//	while(t--) {
//		int a,b,i;
//		scanf("%d %d",&a,&b);
//		int cnt =0;
//		for(i=a;i<=b;i++){
//			if(prime(i) && digiPrime(i)){
//				++cnt;
//			}
//		}
//			printf("%d\n",cnt);
//	}
int t;
sieve();
scanf("%d",&t);
while(t--){
	int a,b,i;
		scanf("%d %d",&a,&b);
		int cnt =0;
		for(i=a;i<=b;i++){
			if(prime[i] && digiPrime(i)){
				++cnt;
			}
		}
			printf("%d\n",cnt);
	}
}

