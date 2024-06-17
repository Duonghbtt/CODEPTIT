#include<stdio.h>
int main () {
	long long int n;
	scanf("%lld",&n);
	long long int sum=1;
	if(0<n<=99999999) {
		while(n!=0) {
			long long int t;
			t=n%10;
			sum = sum*t;
			n=n/10;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
