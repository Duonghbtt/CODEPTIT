#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int t=1,i=1;
	while(i<=n) {
		t=t*i;
		i++;
	}
	printf("%d",t);
	return 0;
}
