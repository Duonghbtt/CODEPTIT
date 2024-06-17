#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int t=0,i=0;
	while(i<n) {
		t=t+i;
		i++;
	}
	printf("%d",t);
	return 0;
}
