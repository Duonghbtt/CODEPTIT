#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=0;
	}
	int j;
	for(i=0;i<n;i++){
		if(b[i]!=-1){
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					b[j]=-1;
				}
			}
			printf("%d ",a[i]);
		}
	}
}
