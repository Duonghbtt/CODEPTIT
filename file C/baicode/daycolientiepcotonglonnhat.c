#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		long long sum=a[0];
		long long max=a[0];
		for(i=1;i<n;i++){
		if(a[i]>=(sum+a[i])){
			sum =a[i];
		}
		else{
			sum+=a[i];
		}
		if(sum>max) max=sum;
		}
		printf("%lld\n",max);
	}
}
