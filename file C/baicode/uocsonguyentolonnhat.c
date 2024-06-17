#include<stdio.h>
#include<math.h>
void songuyento(long long n){
	if(n>=2){
		long long i;
		long long u;
		for(i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n=n/i;
				 u=i;
			}
		}
		if(n!=1){
			printf("%lld",n);
		}
		else{
			printf("%lld",u);
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		songuyento(n);
		printf("\n");
	}
	
}
