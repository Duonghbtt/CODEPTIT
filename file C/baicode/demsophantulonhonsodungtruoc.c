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
		int dem=1,max=a[0];
		for(i=0;i<n;i++){
			if(a[i]>max){
				dem++;
				max=a[i];
			}
		}
		printf("%d\n",dem);
	}
	return 0;
}
