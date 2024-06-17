#include<stdio.h>
void sapxep(int a[],int n){
	int i,j;
	for( i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void giao(int a[],int n,int b[],int m){
	int i,j;
	for(i=0;i<n;i++){
		int kt=0;
		for(j=0;j<m;j++){
			if(a[i]==b[j]){
			 kt=1;
			 break;
			}
    	} 
		if(kt==1) printf("%d ",a[i]);
	}
}
void hieu(int a[],int n,int b[],int m){
	int i;
	for(i=0;i<n;i++){
		int kt=1;
		int j;
		for(j=0;j<m;j++){
			if(a[i]==b[j]) kt=0;
		}
		if(kt==1) printf("%d ",a[i]);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				i=i-1;
				n=n-1;
			}
		}
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
		for(j=0;j<i;j++){
			if(b[i]==b[j]){
				i=i-1;
				m=m-1;
			}
		}
	}
	sapxep(a,n);
	sapxep(b,m);
	giao(a,n,b,m);
	printf("\n");
	hieu(a,n,b,m);
	printf("\n");
	hieu(b,m,a,n);
	printf("\n");
}
