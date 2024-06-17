#include<stdio.h>
int tong(int n){
	int sum=0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
void swap(long *a,long *b){
	long tmp=*a;
	*a=*b;
	*b=tmp;
}
void sapxepTang(long a[],long b[],long n){
	int i,j;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(&a[i],&a[min]);
		swap(&b[i],&b[min]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	long a[200],b[200];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=tong(a[i]);
	}
	sapxepTang(b,a,n);
	for(i=0;i<n;i++){
		printf("%ld ",a[i]);
	}
}
