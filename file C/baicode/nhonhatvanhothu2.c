#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%d ",a[0]);
	for(i=1;i<n;i++){
		if(a[i]!=a[0]){
			printf("%d",a[i]);
			break;
		}
	}
	}
