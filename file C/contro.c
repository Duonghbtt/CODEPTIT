#include<stdio.h>
int main() {
	int a=10;
	int *p = &a;
	*p= 5;
	printf("%d",a ); 
	printf("%d",*p);
	return 0;
}
