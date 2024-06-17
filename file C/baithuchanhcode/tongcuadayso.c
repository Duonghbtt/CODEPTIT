#include<stdio.h>
int main() {
	int n,sum=0,i;
	scanf("%d",&n);
	if(n>0){
		for(i=1;i<=n;i++){
			sum=sum+i;
		}
		printf("%d",sum);
	}
	else{
		printf("NO");
	}
	return 0;
}
