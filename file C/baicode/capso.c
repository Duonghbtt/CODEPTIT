#include<stdio.h>
long long ucln(long long a,long long b){
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b,c,d;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		long long u=ucln(a,b),v=ucln(c,d);
		if(u==v){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
