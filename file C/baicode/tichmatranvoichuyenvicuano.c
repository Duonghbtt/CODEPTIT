#include <stdio.h> 
int main() { 
int t;
 scanf("%d", &t); 
 int z;
 for (z = 1; z <= t; z++) { 
 int n, m;
  scanf("%d%d", &n, &m);
   int a[n + 1][m + 1], b[m + 1][n + 1], c[n + 1][n + 1]; 
   int i,j,k;
   for ( i = 1; i <= n; i++) 
   for ( j = 1; j <= m; j++) 
   scanf("%d", &a[i][j]); 
   printf("Test %d:\n", z); 
   for ( i = 1; i <= m; i++)
    for (j = 1; j <= n; j++) b[i][j] = a[j][i]; 
	for ( i = 1; i <= n; i++) { 
	for ( j = 1; j <= n; j++) {
	 c[i][j] = 0; 
	 for ( k = 1; k <= m; k++)
	  c[i][j] += a[i][k] * b[k][j]; 
	  } } 
	  for (i = 1; i <= n; i++) { 
	  for ( j = 1; j <= n; j++) 
	  printf("%d ", c[i][j]); 
	  printf("\n"); 
	  } } }
