#include<stdio.h>
 #include<math.h> 
 int checknt(int n){ 
 if(n<2) return 0; 
 int i;
 for(i=2;i<=sqrt(n);i++){ 
 if(n%i==0) return 0; 
 } 
 return 1; 
 } 
 int main(){ 
 int n,sum=0; 
 scanf("%d",&n); 
 int a[n][n],i,j; 
 for( i=0;i<n;i++){ 
 for( j=0;j<n;j++){ 
 scanf("%d",&a[i][j]); 
 } 
 } 
 for(i=0;i<n;i++){ 
 for(j=0;j<n;j++){
  if(i<=j){ 
  if(checknt(a[i][j])) sum+=a[i][j]; 
  } 
  } 
  } 
  printf("%d",sum);
 }
