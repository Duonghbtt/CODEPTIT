#include<stdio.h>
#include<math.h>
//int prime(int n){
//	int i;
//	for(i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return n>1;
//}
int prime[10000001];
void sang(){
	int i,j;
	for(i=0;i<=10000000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
for(i=2;i<=sqrt(10000000);i++){
	if(prime[i]){
		for(j=i*i;j<=10000000;j+=i){
			prime[j]=0;
		}
	}
}}  
//int main () {
//	int n;
//	scanf("%d",&n);
//	int i=0,cnt=0;
//	while(cnt<n)	{
//		if(prime(i)==1){
//			printf("%d\n",i);
//			++cnt;
//		}
//		++i;
//	}
//}
int main () {
	sang();
	int n;
	scanf("%d",&n);
	int i=0,cnt=0;
	while(cnt<n)	{
		if(prime[i]==1){
			printf("%d\n",i);
			++cnt;
		}
		++i;
	}
}
