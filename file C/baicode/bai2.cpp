#include<stdio.h>
int main() {
	int Test,i,a;
	scanf("%d",&Test);
	for(i=1;i<=Test;i++) {
		int a;
		scanf("%d",&a);
		int b=a*2;
		printf("\n%d",b);
	}
	return 0;
}

