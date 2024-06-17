#include<stdio.h>
int main() {
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	long long int sum = 0;
	if((0<a)&&(a<b)&&(b<=1000000)){
		long long int i;
		i=a;
		for(i;i<=b;i++) {
		sum = sum+i;
		}
		printf("%lld",sum);
	}
	if((0<b)&&(b<a)&&(a<=1000000)){
		int t=b;
		b=a;
		a=t;
		long long int i;
		i=a;
		for(i;i<=b;i++) {
		sum = sum+i;
		}
		printf("%lld",sum);
	}
	return 0;
}
