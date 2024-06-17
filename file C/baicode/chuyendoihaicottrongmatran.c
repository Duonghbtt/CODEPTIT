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
   if(j==a-1){
    int temp=arr[i][a-1]; 
	arr[i][a-1]=arr[i][b-1]; 
	arr[i][b-1]=temp; 
	} } } 
	for(i=0;i<m;i++){ 
	for(j=0;j<n;j++){ 
	printf("%d ",arr[i][j]); 
	} 
	printf("\n"); 
	} }
