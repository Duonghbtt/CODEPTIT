#include<stdio.h> 
int main(){
 int n; 
  int i,j;
 scanf("%d", &n); 
 int a[100]; 
 for( i=0; i<n; i++){ 
 scanf("%d", &a[i]); 
 } 
 for( i=0; i<n; i++){ 
 for( j=i+1; j<n; j++){
  if(a[i] > a[j]){ 
  int temp = a[i];
   a[i] = a[j];
    a[j] = temp;
	 }
	  } 
	  int z=i+1;
	   if(z<n){
	    printf("Buoc %d: ", z); 
		z++;
		int k; 
		for( k=0; k<n; k++){ 
		printf("%d ", a[k]); } 
		printf("\n");
		 } } }
