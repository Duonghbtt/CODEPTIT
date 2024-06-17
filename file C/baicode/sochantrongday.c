#include<stdio.h>
int main() {
	int t,d;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		if(n<=100) {
		int a[n];
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&d);
			if(d > 0 && d <= 1000) { 
			a[i] = d; 
			}
		}
		for(i=0;i<n;i++) {
		if(a[i]%2==0) {
			printf("%d ",a[i]);
		}	
		}
		printf("\n");
	}}
	return 0;
}
