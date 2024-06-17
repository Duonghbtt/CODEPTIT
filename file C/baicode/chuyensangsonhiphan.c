#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	int i;
	int t=0;
	for(i=1;i<=100;i++){
		if(n==0){
			printf("0");
			break;
		}
		else {
		a[i]=n%2;
		n=n/2;
		t++;
	}
	}
	for(i=t;i>0;i--){
		printf("%d",a[i]);
	}
}
