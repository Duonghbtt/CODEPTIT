#include <stdio.h>
 int main(){ 
 int n;
  scanf("%d",&n);
   int a[n];
    int i,j,tmp;
	 for( i = 0; i < n; i++) { 
	 scanf("%d",&a[i]); 
	 }
	  for(i = 1; i < n; i++){ 
	  tmp = a[i]; 
	  j = i - 1; 
	  while(j >= 0 && a[j] > tmp){ 
	  a[j+1] = a[j];
	   j = j - 1; 
	   } 
	   a[j+1] = tmp; ;
	    for(j = 0; j < n; j++){
		 printf(" %d", a[j]); 
		 } printf("\n");
		  } 
		  return 0;
		   }
