#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long int n;
		scanf("%lld",&n);
		if(0<n<=99999999) {
			long long int i=2;
			while(n>1) {
				if(n%i==0) {
					printf("%lld ",i);
					n=n/i;
				}
				else{
					i++;
				}
			}
			printf("\n");
		}
		}
	return 0;
}
