#include<stdio.h>
int main() {
	int a[5];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[4]=5;
	a[3]=4;
	int i;
	//i=0 --> *(p+0)--> gia tri a[0]
	int *p=a;//p->a[0] (p+0)
	for ( i=0;i<=6;i++){
		printf("%d\t",*(p+i));
	}
	return 0;
}
