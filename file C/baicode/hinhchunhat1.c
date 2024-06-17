#include<stdio.h>
int main() {
	int sc,sh,i,j,k,m;
	scanf("%d %d",&sh,&sc);
	for(i=1;i<=sh;i++){
		for(j=i;j<=sc;j++){
			printf("%d",j);
		}
		if(i>sc){printf("%d",i);
		for(j=sc-1;j>0;j--) {
			printf("%d",j);
		}}
		else{
		for(k=i-1;k>0;k--) {
			printf("%d",k);
		}
    	}
	printf("\n");
}
//	
}
