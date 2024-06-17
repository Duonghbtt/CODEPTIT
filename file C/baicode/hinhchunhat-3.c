#include<stdio.h>
int main (){
	int sh,sc,i,j;
	scanf("%d %d",&sh,&sc);
	for(i=1;i<=sh;i++){
		if(i<sc){
			for(j=i;j>=1;j--){
				printf("%d",j);
			}
			for(j=2;j<=sc-i+1;j++){
				printf("%d",j);
			}
		}
		else {
			for(j=i;j>=i-sc+1;j--){
				printf("%d",j);
			}
		}
		printf("\n");
	}
	return 0;
}
