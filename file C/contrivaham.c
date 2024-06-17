#include<stdio.h>
#include<stdlib.h>
void show(int*a) {
	printf("%d\n",*a);
}
int main(){
	int b=10;
	int *a=&b;
	show(a);
	return 0;
}
