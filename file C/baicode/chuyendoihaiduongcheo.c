#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			int tmp=a[i][j];
			a[i][j]=a[i][n-i-1];
			a[i][n-i-1]=tmp;
			break;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
