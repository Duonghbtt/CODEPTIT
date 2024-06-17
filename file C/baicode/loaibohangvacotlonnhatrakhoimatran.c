#include<stdio.h>

int main(){
	int t;
	scanf("%d ",&t);
	int u;
	for(u=1;u<=t;u++){
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	int max=0;
	int h;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+a[i][j];
		}
		if(max<sum) {
		 h=i;
		max=sum;
	}
	sum=0;
}
	for(i=0;i<m;i++){
		if(i==h){
			for(j=0;j<n;j++){
					a[i][j]=0;
				}
			}
		}
	int k;
	sum=0,max=0;
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			sum=sum+a[i][j];
		}
		if(max<sum) {
		 k=j;
		max=sum;
	}
	sum=0;
}
	printf("Test %d:\n",u);
	for(i=0;i<m;i++){
		if(i!=h){
			for(j=0;j<n;j++){
				if(j!=k){
					printf("%d ",a[i][j]);
				}
			}
			printf("\n");
		}
	}
	}
}
