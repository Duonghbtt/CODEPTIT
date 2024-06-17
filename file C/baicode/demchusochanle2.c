#include<stdio.h>
int main() {
	int i;
	scanf("%d",&i);
	while(i--) {
	int n,c=0,l=0;
	scanf("%d",&n);
	while(n!=0) {
		int t=n%10;
		if(n%2==0) {
			c++;
		}
		else {
			l++;
		}
		n=n/10;
	}
	printf("%d %d\n",l,c);
	}
	return 0;
}
