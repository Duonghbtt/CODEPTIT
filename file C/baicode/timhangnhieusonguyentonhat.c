#include<stdio.h>
#include<math.h>
int nt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int h;
	int dem=0,max=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(nt(a[i][j])){
				dem++;
			}
		}
		if(max<dem){
			h=i+1;
			max=dem;
		}
		dem=0;
	}
	printf("%d\n",h);
	for(i=0;i<n;i++){
		if(i==(h-1)){
			for(j=0;j<n;j++){
				if(nt(a[i][j])){
					printf("%d ",a[i][j]);
				}
			}
		}
	}
}
