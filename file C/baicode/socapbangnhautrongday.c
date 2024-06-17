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
		int dem=0;
		for(i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
