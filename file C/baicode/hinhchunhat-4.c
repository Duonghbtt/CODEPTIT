#include <stdio.h> 
int Max(int a,int b){ 
if(a>b){
 return a;
  }
  else{ 
  return b; 
  } 
  } 
int main() { 
int a, b,i; 
scanf("%d%d", &a, &b); 
int num = Max(a, b); 
for (i = 1; i <= a; i++) { 
int count = num; 
int j=1;
 while (j <= b) { 
 if (count > 1) { 
 printf("%d", count--); 
 } 
 else if (count == 1) { 
 while (j <= b) {
  printf("%d", count++); 
  j++;
   }
    break;
	 }
	  j++; 
	  } 
	  num--; 
	  printf("\n"); 
	  } 
	  return 0; 
	  }
