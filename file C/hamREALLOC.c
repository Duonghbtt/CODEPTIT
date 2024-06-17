#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	p=(int*)malloc(5*sizeof(int));
	int i;
	for(i=0;i<5;i++){
		scanf("%d",(p+i));
	}
		for ( i=0;i<5;i++){
		printf("%d\t",*(p+i));
	}
	printf("\n");
	p=(int*)realloc(p,10);
	for(i=5;i<10;i++) {
		scanf("%d",(p+i));
	}
	for ( i=5;i<10;i++){
		printf("%d\t",*(p+i));
	}
	return 0;
}
