#include<stdio.h>
void swap(int *a,int *b){
	int tmp=*b;
	*b=*a;
	*a=tmp;
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		int min=i,j;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]) min=j;
		}
		swap(&a[i],&a[min]);
		int z=i+1;
		printf("Buoc %d: ",z);
		int k;
		for(k=0;k<n;k++){
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}
