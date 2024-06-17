#include<stdio.h>
#include<math.h>
void pt(long long n ){
	int i;
		for(i=2;i<=sqrt(n);i++){
			int dem=0;
			while(n%i==0){
				dem++;
				n=n/i;
			}
			if(dem!=0){
				printf("%d(%lld) ",i,dem);
			}
		}
			if(n!=1){
				printf("%lld(1) ",n);
			}
	}
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		long long n;
		scanf("%lld",&n);
		printf("Test %d: ",i);
		pt(n);
		printf("\n");
	}
}
