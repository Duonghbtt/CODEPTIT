#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("0 ");
		}
		for(j=1;j<n-i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
