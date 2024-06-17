#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int dem;
	for(i=1;i<=n;i++){
		printf("%c ",i+64);
		int sum=i;
		for(j=n-1,dem=i-1;j>0,dem>0;j--,dem--){
			printf("%c ",sum+j+64);
			sum=sum+j;
		}
		printf("\n");
	}
}
