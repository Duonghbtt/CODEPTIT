#include<stdio.h>
int giaithua(int n) {
	int t=1;
	int i;
	for (i=1;i<=n;i++) {
		t=t*i;
	}
	return t;
}
int tong(int n) {
	int sum=0,a=n;
	while(n!=0) {
		sum=sum+giaithua(n%10);
		n=n/10;
	}
	if(a==sum) {
		printf("1");
	}
	else {
	printf("0");
	}
}
int main() {
	int n;
	scanf("%d",&n);
	giaithua(n);
	tong(n);
	return 0;
}
