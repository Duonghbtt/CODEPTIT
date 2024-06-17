#include<stdio.h>
int main() {
	int a[10],b[4];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<4;i++) {
		b[i]=0;
	}
	for (i=0;i<10;i++) {
		a[i]=n%10;
		n=n/10;
	}
	for(i=0;i<10;i++) {
		if(a[i]==2) {
			b[0]=b[0]+1;
			}
		if(a[i]==3) {
			b[1]++;
		}
		if(a[i]==5) {
			b[2]++;
		}
		if(a[i]==7) {
			b[3]++;
		}
	}
	if(b[0]>0) {
		printf("2 %d\n",b[0]);}
	if(b[1]>0) {
		printf("3 %d\n",b[1]);}
	if(b[2]>0) {
		printf("5 %d\n",b[2]);}
	if(b[3]>0) {
		printf("7 %d\n",b[3]);}
	return 0;
	}
	
