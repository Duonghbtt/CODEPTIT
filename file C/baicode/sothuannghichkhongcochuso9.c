#include<stdio.h>
int sothuannghich(int n){
	int u=n;
	int sum=0;
	while(n!=0){
		sum=sum*10+n%10;
		n=n/10;
	}
	if(sum==u) return 1;
	else return 0;
}
int khong9(int n){
	while(n!=0){
		if(n%10==9) return 0;
		n=n/10;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int dem=0;
	for(i=2;i<n;i++){
		if(sothuannghich(i)&&khong9(i)){
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
