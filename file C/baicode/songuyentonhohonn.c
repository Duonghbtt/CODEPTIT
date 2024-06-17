#include<stdio.h>
int main() {
	int N,t,i;
	scanf("%d",&N);
	for(t=2;t<N;t++) {
			i=2;
				while((t%i)!=0) {
					i++;
				}
				if(i==t) {
					printf("%d ",t);
				}
			}
	return 0;
}
