#include<stdio.h>
int main() {
	int n,demc=0,deml=0;
	scanf("%d",&n);
	int a[n];
	int i,u;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) {
		if(a[i]%2==0) {
		demc++;
	}
	int b[demc];
	for(u=0;u<demc;u++){
	for(i=0;i<n;i++) {
		if(a[i]%2==0) {
			b[u]=a[i]
		}
	}
	}
	
	for(i=0;i<n;i++) {
		if(a[i]%2!=0) {
		deml++;
	}
	}
}
