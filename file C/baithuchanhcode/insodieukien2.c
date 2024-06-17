#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if((n<100)&&(n>0)) {
		printf("%d",n);
	}
	else{
		printf("Nhap sai");
	}
	return 0;
}
