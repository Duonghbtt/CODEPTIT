#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		if(i%2==0){
			for(j=2;j<=2*i;j+=2){
				printf("%d",j);
			}
		}
		else{
		for(j=1;j<=2*i-1;j+=2){
			printf("%d",j);
		}
	}
		printf("\n");
	}
}
