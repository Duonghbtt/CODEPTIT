#include<stdio.h>
#include<math.h>
int kiemtra(int n){
	if(n<2) return 0;
	else{
		int i;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int n;
	int i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=0;
	for(i=0;i<n;i++){
		if(kiemtra(a[i])==1){
			dem ++;
		}
	}
	printf("%d ",dem);
	for(i=0;i<n;i++){
		if(kiemtra(a[i])==1){
			printf("%d ",a[i]);
		}
	}
}
