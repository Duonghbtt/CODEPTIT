#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		if((10<=n)&&(n<=999999999)){
			int a[10];
			int i;
			for(i=0;i<10;i++){
				a[i]=n%10;
				n=n/10;
			}
			int sum =0;
			for(i=0;i<10;i++){
				sum=sum+a[i];
			}
			if(sum%10==0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
}
