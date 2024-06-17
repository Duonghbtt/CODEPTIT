#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]) min=j;
		}
		int tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;
		int k=i;
		for(k=0;k<n;k++){
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}
