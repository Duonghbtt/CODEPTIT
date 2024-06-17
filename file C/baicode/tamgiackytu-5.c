#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		int t=0;
		for(j=i-1;t<i;t++,j++){
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}
