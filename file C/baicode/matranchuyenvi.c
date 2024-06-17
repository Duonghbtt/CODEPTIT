#include <stdio.h>
int main() {
	int sc,sh;
	scanf("%d %d",&sh,&sc);
	int a[sh][sc];
	int i,j;
	for(i=0;i<sh;i++){
		for(j=0;j<sc;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<sc;j++){
		for(i=0;i<sh;i++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
