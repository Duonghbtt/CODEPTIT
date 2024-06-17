#include<stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	if(b==0) {
		printf("0");
	}
	if(b!=0) {
	printf("%d",a+b);
	printf(" %d",a-b);
	printf(" %d",a*b);
	float x=a,y=b;
	float thuong=x/y;
	printf(" %.2f",thuong); 
	printf(" %d",a%b);
	}
	return 0;
}
