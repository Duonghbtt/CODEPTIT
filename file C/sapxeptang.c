#include<stdio.h>
void swap(int*a,int*b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void sapxeptang(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
				swap(&a[i],&a[min]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sapxeptang(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
