#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void sapxepgiam(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int max=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[max]){
				max=j;
			}
		}
		swap(&a[i],&a[max]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sapxepgiam(a,n);
	printf("%d ",a[0]);
	for(i=1;i<n;i++){
		if(a[i]!=a[0]){
			printf("%d",a[i]);
			break;
		}
	}
}
