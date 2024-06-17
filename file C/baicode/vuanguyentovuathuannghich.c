#include<stdio.h>
long long prime[1000001];
void sang() {
	long long i,j;
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
long long ktra(long long n){
	long long i,sum=0;
	long long u=n;
	while(n!=0){
		sum=sum*10+n%10;
		n=n/10;
	}
	if(u==sum){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
	long long a,b,i,cnt=0;
	scanf("%lld %lld",&a,&b);
	for(i=a;i<=b;i++){
		if((prime[i]==1)&&(ktra(i)==1)){
			printf("%lld",i);
			cnt++;
		if(cnt==10){
			printf("\n");
			cnt=0;
		}
		else{
			printf(" ");
		}
		}
	}
	printf("\n");
}
}
