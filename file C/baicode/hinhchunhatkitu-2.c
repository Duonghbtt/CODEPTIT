#include<stdio.h>
int main(){
	int sh,sc,i,j;
	scanf("%d %d",&sh,&sc);
	for(i=1;i<=sh;i++){
		if(i<sc){
			for(j=i;j<=sc;j++){
				printf("%c",j+64);
			}
			for(j=i-1;j>0;j--){
				printf("%c",j+64);
			}
		}
		else {
			for(j=sc;j>=1;j--){
				printf("%c",j+64);
			}
		}
		printf("\n");
	}
	return 0;
}

