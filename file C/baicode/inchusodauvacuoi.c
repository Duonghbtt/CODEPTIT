#include<stdio.h>
#include<math.h>
int main() {
	int n,t=0;
	int a;
	scanf("%d",&n);
	a=n;
	while(n!=0) {
		t++;
		n=n/10;
	}
	t=t-1;
	int u=pow(10,t);
	printf("%d %d",a/u,a%10);
	return 0;
}
