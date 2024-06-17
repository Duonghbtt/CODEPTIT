#include<stdio.h>
#include<math.h>
int check(int n) {
	int c=n%10;
	n/=10;
	while(n!=0) {
		int b=n%10;
		if(b>c) return 0;
		c=b;
		n/=10;
	}
	return 1;
}
int main() {
	int n,a,b,i,t;
	scanf("%d",&t);
	while(t--) { 
	scanf("%d",&n);
	n=n-1;
	a=pow(10,n)+1;
	n++;
	b=pow(10,n)-1;
	for(i=a;i<=b;i++) {
		if(check(i)==1) {
		printf("%d ",i);
		}
	}
	printf("\n");
	}
	return 0;
}
