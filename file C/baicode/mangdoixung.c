#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int sum=0;
		for(i=0;i<n/2;i++){
			if(a[i]!=a[n-1-i]){
				sum++;
				break;
			}
		}
		if(sum!=0){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
