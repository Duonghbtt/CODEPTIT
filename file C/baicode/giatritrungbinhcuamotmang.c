#include<stdio.h>
int main() {
	int n;
	float sum=0;
	scanf("%d",&n);
	float a[n];
	int i;
	for(i=0;i<n;i++) {
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++) {
		sum=a[i]+sum;
	}
	printf("%.3f",sum/n);
	return 0;
}
