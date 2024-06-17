#include<stdio.h>
#include<math.h>
void phantich(long long n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		int dem=0;
		while(n%i==0){
			dem++;
			n=n/i;
		}
		if(dem>0){
		printf("%d^%d",i,dem);
	}
		if((n>1)&&(dem>0)){
			printf(" * ");
		}
	}
	if(n>1){
		printf("%d^1",n);
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("%lld =",n);
		phantich(n);
	}
}
