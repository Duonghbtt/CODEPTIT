#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if((0<n)&&(n<=999999)) {
		int i=2;
	while(n>1) {
				if(n%i==0) {
					n=n/i;
					if(n!=1) {
					printf("%lldx",i);
					}
					else{
					 printf("%lld",i);
					}
				}
				else{
					i++;
				}
			}	
		}
	return 0;
}

