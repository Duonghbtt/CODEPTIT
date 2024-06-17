#include<stdio.h>
int main() {
	int sh,sc,i,j,k;
	scanf("%d %d",&sh,&sc);
	for(i=0;i<sh;i++) {
		for(k=0;k<i;k++) {
				printf("~");
			}
		for(j=0;j<sc;j++) {
				printf("*");
		}
	printf("\n");
	}
}
