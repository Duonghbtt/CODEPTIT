#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void reverse(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
	int tmp=a[l];
	a[l]=a[r];
	a[r]=tmp;
	++l;
	--r;
}
}
// quy dinh a lon hon b;
void add(char a[],char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	int n=0;
	int i;
	int x[n1],y[n1],z[n1+1];
	for(i=0;i<n1;i++) x[i]=a[i]-'0';
	for(i=0;i<n2;i++) y[i]=b[i]-'0';
	reverse(x,n1);
	reverse(y,n2);
	for(i=n2;i<n1;i++) y[i]=0;
	int nho=0;
	for(i=0;i<n1;i++){
		int tmp = x[i] + y[i] + nho;
		z[n]=tmp%10;
		nho = tmp/10;
		n++;
	}
	if(nho) z[n++]=nho;
	for(i=n-1;i>=0;i--) printf("%d",z[i]);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[1001],d[1001];
		scanf("%s%s",c,d);
		if(strlen(c)>strlen(d)) add(c,d);
		else add(d,c);
		printf("\n");
	}
}

