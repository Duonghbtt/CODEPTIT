#include<stdio.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++) {
			printf("~");
		}
		for(j=n-i-1;j<n-i-1+n;j++){
			if(j==n-1-i||i==0||j==n-i-2+n||i==n-1)  {
			printf("*");
		}
		else{
			printf(".");
		}
		}
		
		printf("\n");
	}
}
