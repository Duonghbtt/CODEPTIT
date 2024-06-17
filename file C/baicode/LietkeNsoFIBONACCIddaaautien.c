#include<stdio.h>
void solve(int n){
	printf("0 1 ");
	long long fn2=0,fn1=1;
	int i;
	for(i=3;i<=n;i++){
		long long fn=fn1+fn2;
		printf("%lld ",fn);
		int t;
		fn2=fn1;
		fn1=fn;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	solve(n);
}

