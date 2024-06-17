#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if(n>0) {
		int sum=0,i=1;
		while(sum<=n) {
			sum=sum+i;
			i++;
		}
		printf("%d",i-1);
	}
	else{
		printf("NO");
	}
	return 0;
}
