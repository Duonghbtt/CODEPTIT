#include<stdio.h>
long long int tong(long long int a,long long int b){
	long long int sum=a+b;
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		if((a>0)&&(b>0)){
		printf("%lld",tong(a,b));
	}
}
}
