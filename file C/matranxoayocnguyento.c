#include<stdio.h>
#include<math.h>
int nt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int p[100];
void init(){
	int i=0,cnt=0;
	while(cnt<100){
		if(nt(i)){
			p[cnt]=i;
			cnt++;
		}
		i++;
	}
}
int main(){
	init();
	int t;
	scanf("%d",&t);
	int u;
	for(u=1;u<=t;u++){
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
			a[h1][i]=p[cnt];
			cnt++;
		}
		h1++;
		for(i=h1;i<=h2;i++){
			a[i][c2]=p[cnt];
			cnt++;
		}
		c2--;
		if(c1<=c2){
			for(i=c2;i>=c1;i--){
				a[h2][i]=p[cnt];
				cnt++;
			}
			h2--;
		}
		if(h1<=h2){
			for(i=h2;i>=h1;i--){
				a[i][c1]=p[cnt];
				cnt++;
			}
			c1++;
		}
	}
	printf("Test %d:\n",u);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
}
