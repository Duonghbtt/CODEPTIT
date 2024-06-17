#include<stdio.h>
 	long long int a[92];
long long int sofibonacci(int n) {
	int i;
	a[0]=a[1]=1;
	for(i=2;i<n;i++) {
		a[i]=a[i-1]+a[i-2];
	}
	printf("%lld\n",a[n-1]);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
	sofibonacci(n);
	}
	return 0;
}
