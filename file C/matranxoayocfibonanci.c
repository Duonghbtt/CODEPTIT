#include<stdio.h>
long long fibo[100];
void init(){
	fibo[0]=0;
	fibo[1]=1;
	int i;
	for(i=2;i<=90;i++){
		fibo[i]=fibo[i-1]+ fibo[i-2];
	}
}

int main(){
	init();
	int i,j;
	int n;
	scanf("%d",&n);
	int a[n][n];
	int cnt=0; 
	int h1=0;
	int h2=n-1;
	int c1=0;
	int c2=n-1;
	while(h1<=h2&&c1<=c2){
		for(i=h1;i<=h2;i++){
			a[h1][i]=fibo[cnt];
			cnt++;
		}
		h1++;
		for(i=h1;i<=h2;i++){
			a[i][c2]=fibo[cnt];
			cnt++;
		}
		c2--;
		if(c1<=c2){
			for(i=c2;i>=c1;i--){
				a[h2][i]=fibo[cnt];
				cnt++;
			}
			h2--;
		}
		if(h1<=h2){
			for(i=h2;i>=h1;i--){
				a[i][c1]=fibo[cnt];
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

