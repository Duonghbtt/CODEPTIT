#include<stdio.h>
long long bcnnucln(long long a,long long b){
	long long f=a*b,t;
	if((a>0)&&(b>0)){
		while(b!=0){
			t=b;
			b=a%b;
			a=t;
		}
		printf("%lld\n%lld",a,f/a);
	}
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	bcnnucln(a,b);
}
