#include<stdio.h>
int main () {
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;j<=i;j++) {
		if(i==0||i==n-1||j==0||j==i){
			printf("*");
		}
		else {printf(".");}
		}
	printf("\n");
	}
	return 0;
}
