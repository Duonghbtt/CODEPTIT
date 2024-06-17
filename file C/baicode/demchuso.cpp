#include<stdio.h>
int main() {
	int n,t=0;
	scanf("%d",&n);
	if((0<n)&&(n<=99999999)) {
	while(n!=0) {
		n=n/10;
		t++;
	}
	}
	printf("%d",t);
	return 0;
}
