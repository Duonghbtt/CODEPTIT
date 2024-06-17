#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int cnt=1; 
	int h1=0;
	int h2=n-1;
	int c1=0;
	int c2=n-1;
	int i,j;
	while(h1<=h2&&c1<=c2){
		for(i=h1;i<=h2;i++){
			a[h1][i]=cnt;
			cnt++;
		}
		h1++;
		for(i=h1;i<=h2;i++){
			a[i][c2]=cnt;
			cnt++;
		}
		c2--;
		if(c1<=c2){
			for(i=c2;i>=c1;i--){
				a[h2][i]=cnt;
				cnt++;
			}
			h2--;
		}
		if(h1<=h2){
			for(i=h2;i>=h1;i--){
				a[i][c1]=cnt;
				cnt++;
			}
			c1++;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
