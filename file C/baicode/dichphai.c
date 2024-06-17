#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t;
	scanf("%d",&t);
	for(i=n-t;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<n-t;i++){
		printf("%d ",a[i]);
	}
}
