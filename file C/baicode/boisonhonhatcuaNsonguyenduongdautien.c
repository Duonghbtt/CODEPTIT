#include <stdio.h> 
unsigned long long gcd(unsigned long long a, unsigned long long b) { 
if (a == 0) return b; 
return gcd(b % a, a); 
} 
unsigned long long lcm(unsigned long long a, unsigned long long b) { 
return (a * b) / gcd(a, b); 
} 
int main() { 
int t;
 scanf("%d", &t);
  while (t--) { 
  int n; 
  scanf("%d", &n); 
  unsigned long long ans = 1; 
  int i;
  for ( i = 2; i <= n; i++) { 
  ans = lcm(ans, i); } 
  printf("%llu\n", ans); 
  } 
  return 0; 
  }
