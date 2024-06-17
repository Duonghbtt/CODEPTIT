#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t=0;
	for(i=0;i<n;i++){
		int dem=0;		
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
				a[j]=0;
			}
			}
			if(dem>0){
				if(a[i]!=0){				
				printf("%d ",a[i]);
				t++;
		}
	}
	}
	if(t==0){
		printf("0");
	}
	return 0;
}
