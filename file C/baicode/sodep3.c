#include<stdio.h>
int sothuannghich(long long n){
	int sum =0;
	int u=n;
	while(n!=0){
		sum=(n%10)+sum*10;
		n=n/10;
	}
	if(sum==u) return 1;
	else return 0;
}
int chuaso6(long long n){
	while(n!=0){
		if(n%10==6){
			return 1;
		}
		n=n/10;
	}
	return 0;
}
int tongchuso(long long n){
	int sum=0;
	while(n!=0){
		sum=n%10+sum;
		n=n/10;
	}
	if(sum%10==8) return 1;
	else return 0;
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	long long i;
	if(a>b){
		long long c=a;
		a=b;
		b=c;
	}
	for(i=a;i<=b;i++){
		if((sothuannghich(i))&&(chuaso6(i))&&(tongchuso(i))){
			printf("%d ",i);
		}
	}
}
