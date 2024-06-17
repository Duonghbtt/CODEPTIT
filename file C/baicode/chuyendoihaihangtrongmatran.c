#include<stdio.h> 
#include<math.h> 
int main(){
 int m,n; 
 scanf("%d%d",&m,&n); 
 int arr[m][n]; 
 int i,j; 
 for(i=0;i<m;i++){ 
 for(j=0;j<n;j++){ 
 scanf("%d",&arr[i][j]);
  } }
   int a,b; 
   scanf("%d%d",&a,&b); 
   for(i=0;i<m;i++){ 
   for(j=0;j<n;j++){ 
   if(i==a-1){
    int temp=arr[a-1][j]; 
	arr[a-1][j]=arr[b-1][j]; 
	arr[b-1][j]=temp; 
	} } } 
	for(i=0;i<m;i++){ 
	for(j=0;j<n;j++){ 
	printf("%d ",arr[i][j]); 
	} 
	printf("\n"); 
	} }
