#include<stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void sapxepTang(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(&a[i],&a[min]);
	}
}
void sapxepGiam(int a[],int n){
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
	int t;
	scanf("%d",&t);
	int z=1;
	while(t--){
		int n;
		scanf("%d",&n);
		int a[101],b[101],c[202];
		int i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		sapxepTang(a,n);
		sapxepGiam(b,n);
		printf("Test %d:\n",z);
		z++;
		int k=0,m=0;
		for(i=0;i<2*n;i++){
			if(i%2==0){
				c[i]=a[k];
				k++;
			}
			else{
				c[i]=b[m];
				m++;
			}
		}
		for(i=0;i<2*n;i++){
			printf("%d ",c[i]);
		}
		printf("\n");
	}
}
