#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) {
		if(a[i]%2==0) {
			printf("%d ",a[i]);
	}
	}
	printf("\n");
	for(i=0;i<n;i++) {
		if(a[i]%2!=0) {
			printf("%d ",a[i]);
	}
	}
}
