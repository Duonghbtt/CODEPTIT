#include<stdio.h>
int ktra(long long n){
	int a[10];
	int i;
	int dem=1;
	for(i=0;i<10;i++){
		a[i]=n%10;
		n=n/10;
		if(n!=0){
			dem++;
		}
	}
	for(i=0;i<dem-1;i++){
		if(a[i]>=a[i+1]){
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		long long i;
		int dem=0; 
		for(i=a;i<=b;i++){
			if(ktra(i)==1){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
