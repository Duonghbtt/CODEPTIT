#include<stdio.h> 
#include<math.h> 
long long prime[1000000]; 
void Sang() {
long long i; 
for(i = 1; i <= 1000000; i++){
 prime[i]=1; } 
 prime[0] = prime[1] = 0; 
 for(i = 2; i <= 1000; i++){ 
 if(prime[i]){ 
 long long j;
 for(j = i*i; j <= 1000000; j+=i){ 
 prime[j]=0; } } } } 
 int main() { 
 Sang(); 
 int t; 
 scanf("%d", &t); 
 while(t--){
  long long l,r,i; 
  int dem=0; 
  scanf("%lld %lld" ,&l ,&r);
   int a = sqrt(l),b = sqrt(r); 
   for( i = a; i <= b; i++){ 
   if (prime[i]){ 
   dem++; } 
   } 
   printf("%d\n", dem); 
   } }
