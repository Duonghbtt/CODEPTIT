#include<stdio.h>
int tong(int n){
	int sum=0;
	int i;
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int dem;
	for (i=1;i<=n;i++){
		if(i%2!=0){
			for(j=tong(i)-i+1,dem=i;dem>0;dem--,j++){
				printf("%c ",j+96);
			}
		}
		else{
			for(j=tong(i),dem=i;dem>0;dem--,j--){
				printf("%c ",j+96);
			}
		}
		printf("\n");
	}
}
