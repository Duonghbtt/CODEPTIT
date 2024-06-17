#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("~");
		}
		for(j=2;j<=2*i;j+=2){
			printf("%d",j);
		}
		for(j=2*(i-1);j>0;j-=2){
			printf("%d",j);
		}
		printf("\n");
	}
}
