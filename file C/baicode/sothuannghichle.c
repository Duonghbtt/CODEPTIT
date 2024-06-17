#include<stdio.h>
int sothuannghich(long long int n){
	long long int t=0,u=n;
	while(n!=0){
		t=t*10+n%10;
		n=n/10;
	}
	if(u==t) return 1;
	return 0;
}
int tatcachusole(long long int n){
	while(n!=0){
		int t=n%10;
		if(t%2==0){
			return 0;
			break;
		}
		n=n/10;
	}
	return 1;
}
int tongle(long long int n){
	int sum =0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	if(sum%2==0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		if(sothuannghich(n)==1){
			if(tatcachusole(n)==1){
				if(tongle(n)==1){
					printf("YES\n");
				}
			}
		}
		else printf("NO\n");
	}
}
