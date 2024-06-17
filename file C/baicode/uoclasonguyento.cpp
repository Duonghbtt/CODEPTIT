#include<stdio.h>
int main() {
	int N,i,t;
	scanf("%d",&N);
	if(N>=2) {
		for(t=2;t<=N;t++) {
			if(N%t==0) {
				i=2;
				while((t%i)!=0) {
					i++;
				}
				if(i==t) {
					printf("%d ",t);
				}
			}
		}
	}
	return 0;
}
