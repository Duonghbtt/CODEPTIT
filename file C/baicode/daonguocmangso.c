#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	i=n-1;
	for(i;i>=0;i--) {
		printf("%d",a[i]);
	}	return 0;
}
