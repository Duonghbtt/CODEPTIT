#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=1;j<=2*i+1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
