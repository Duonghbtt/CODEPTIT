#include<stdio.h>
int main() {
	int i;
	scanf("%d",&i);
	while(i--) {
		long long int n;
		scanf("%lld",&n);
		int a1,a2;
		if(10<=n<=99999999) {
			a1=n%10;
			while(n!=0) {
				a2=n;
				n=n/10;			
			}
			if(a1==a2) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
	return 0;
}
