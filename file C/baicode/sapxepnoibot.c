#include <stdio.h>
 int main(){ 
 int n;
  scanf("%d", &n);
   int a[n]; 
   int i,j;
   for( i=0; i<n; i++){ 
   scanf("%d", &a[i]);
    } 
	for(i=0; i<n; i++){ 
	int k=0; 
	for( j=0; j<n-i-1; j++){
	 if(a[j]>a[j+1]){
	  k=1; 
	  int r=a[j]; 
	  a[j]=a[j+1];
	   a[j+1]=r;
	    } } 
		if(k==1){ 
		printf("Buoc %d: ", i+1); 
		for( j=0; j<n; j++) 
		printf("%d ", a[j]);
		 printf("\n"); 
		 } }
		  return 0; 
		  }
