#include<stdio.h> 
int max(int a, int b) { 
return (a<b)? b:a;
} 
int main() {
 int h, c, count = 0; 
 scanf("%d%d", &h, &c); 
 char kt; 
 int i,j;
 for (i = 1; i <= h; i++) { 
 kt = max(h,c) + 96;
  count = 0; 
  for (j = 1; j <= c; j++) { 
  printf("%c", kt); 
  count++;
   if (count < i) {
   kt--;
   }
   } 
   printf("\n"); 
   } }
