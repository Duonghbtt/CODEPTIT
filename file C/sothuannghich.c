#include<stdio.h>
int ktra(int n){
	int i,sum=0;
	int u=n;
	while(n!=0){
		sum=sum*10+n%10;
		n=n/10;
	}
	if(u==sum){
		return 1;
	}
	else{
		return 0;
	}
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(ktra(n)==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
