#include<stdio.h>
int main() {
	int n; 
	scanf("%d",&n);
	int a[n];
	int i,t;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) {
		t=2;
		while(a[i]%t!=0) {
			t++;
			}
		if(t==a[i]){
			printf("%d ",a[i]);
		}	
		}
		
	}
