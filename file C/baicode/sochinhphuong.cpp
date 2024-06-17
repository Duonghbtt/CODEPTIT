#include<stdio.h>
#include<math.h>
int main () {
	long long int n,i,t;
	scanf("%lld",&i);
	while(i--) {
		scanf("%lld",&n);
		if(0<n<=99999999) {
			t=sqrt(n);
			if(n==pow(t,2)) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		
	}
	return 0;
}
