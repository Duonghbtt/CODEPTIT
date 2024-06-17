#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,dem;
	for(i=1;i<=n;i++){
		printf("%d",i);
		int sum=i;
		for(j=n-1,dem=i-1;j>0,dem>0;j--,dem--){
			printf(" %d",sum+j);
			sum=sum+j;
		}
		printf("\n");
	}
}
