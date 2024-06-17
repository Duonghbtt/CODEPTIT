#include<stdio.h>
int giaithua(int n){
	int i,a=1;
	for(i=2;i<=n;i++){
		a=a*i;
	}
	return a;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int b=giaithua(n);
	int t=1,i;
	for(i=1;i<=k;i++){
		t=t*2;
	}
	if(b%t==0){
		printf("YES");
	}
	else{
	printf("NO");}
}
