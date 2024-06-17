#include<stdio.h>
int main(){
	int n ;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<n-1;i++){
		int t=a[i];
		for(j=i+1;j<n;j++){
			if(t==a[j]){
				a[j]=0;
				a[i]=0;
			}
		}
	}
	int dem=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			dem++;
		}
	}
	printf("%d\n",dem);
	for(i=0;i<n;i++){
		if(a[i]>0){
			printf("%d ",a[i]);
		}
	}
}
