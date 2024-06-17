#include<stdio.h>
int tong(int n){
	int sum =0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int u=tong(a);
	int v=tong(b);
	if(a>=b){
		printf("%d %d",a,b);
	}
	else{
		printf("%d %d",b,a);
	}
}
