#include<stdio.h>
int main(){
	int sh,sc,i,j;
	scanf("%d %d",&sh,&sc);
	for(i=1;i<=sh;i++){
		if(i<sc){
			for(j=i-1;j<=sc-1;j++){
				printf("%c",j+64);
			}
			int t=0;
			for(j=sc-1;t<i-1;t++){
				printf("%c",j+64);
			}
		}
		else{
			int t=0;
			for(j=sc-1;t<sc;t++){
				printf("%c",j+64);
			}
		}
	printf("\n");
	}
	return 0;
}
