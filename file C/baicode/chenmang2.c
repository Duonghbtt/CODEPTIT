#include<stdio.h>
int main() {
	int t,u=1;
	scanf("%d",&t);
	for(u=1;u<=t;u++) {
	int n,m,c;
	scanf("%d %d %d",&n,&m,&c);
	int i,a[n],b[m];
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++) {
		scanf("%d",&b[i]);
	}
	printf("Test %d:\n",u);
	for(i=0;i<c;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<m;i++) {
		printf("%d ",b[i]);
	}
	for(i=c;i<n;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	}
	return 0;
}
