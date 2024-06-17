#include <stdio.h>
 int main(){ 
 int n;
  scanf("%d",&n);
   int a[n];
    int i,j,tmp;
	 for( i = 0; i < n; i++) { 
	 scanf("%d",&a[i]); 
	 }
	  printf("Buoc %d: %d\n",0,a[0]); 
	  for(i = 1; i < n; i++){ 
	  tmp = a[i]; 
	  j = i - 1; 
	  while(j >= 0 && a[j] > tmp){ 
	  a[j+1] = a[j];
	   j = j - 1; 
	   } 
	   a[j+1] = tmp; 
	   printf("Buoc %d:",i);
	    for(j = 0; j <= i; j++){
		 printf(" %d", a[j]); 
		 } printf("\n");
		  } 
		  return 0;
		   }
