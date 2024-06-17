#include<stdio.h>
int gtnn(int a,int b){
	if(a<b){
		return a;
	}
	return b;
}
int main(){
	int sh,sc,i,j;
	scanf("%d %d",&sh,&sc);
	for(i=sh;i>=1;i--){
		int min = gtnn(i,sc);
		for(j=1;j<=sc;j++){
			if(j<=sc-i){
				printf("%c",64+min++);
			}
			else{
				printf("%c",64+min);
			}
		}
		printf("\n");
	}
	return 0;
}
