#include <stdio.h>
 #include <math.h>
  int main() { 
  int t, n; 
  scanf("%d", &t); 
  while (t--) { 
  int i,
   dem = 0, 
   uoc = 0; 
   scanf("%d", &n); 
   while (n % 3 == 0) { 
   dem++;
    n /= 3; 
   } 
   for (i = 1; i * i <= n; i++) if (n % i == 0) { 
   uoc++; 
   int j = n / i; 
   if (j != i)
    uoc++; 
	}
	 printf("%d\n", uoc * dem);
 } }
