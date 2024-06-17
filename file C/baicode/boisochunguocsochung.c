#include<stdio.h>
void bscusc( long long a,long long b){
	long long f=a*b;
	long long t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%lld %lld\n",f/a,a);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		bscusc(a,b);
	}
}
