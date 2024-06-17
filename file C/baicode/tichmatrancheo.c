#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int z;
	for(z=1;z<=t;z++){
		int n;
		scanf("%d",&n);
		int a[n+1][n+1],b[n+1][n+1],c[n+1][n+1];
		int i,j,k;
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				a[i][j]=j;
			}
			for(j=i+1;j<=n;j++){
				a[i][j]=0;
			}
		}
  printf("Test %d:\n", z); 
   for ( i = 1; i <= n; i++)
    for (j = 1; j <= n; j++) b[i][j] = a[j][i]; 
	for ( i = 1; i <= n; i++) { 
	for ( j = 1; j <= n; j++) {
	 c[i][j] = 0; 
	 for ( k = 1; k <= n; k++)
	  c[i][j] += a[i][k] * b[k][j]; 
	  } } 
	  for (i = 1; i <= n; i++) { 
	  for ( j = 1; j <= n; j++) 
	  printf("%d ", c[i][j]); 
	  printf("\n"); 
	  } } }
