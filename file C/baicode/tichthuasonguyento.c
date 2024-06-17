#include<stdio.h> 
int main(){ 
int t; 
scanf("%d",&t); 
while(t--){ 
int n; 
scanf("%d",&n); 
int tich=1,i;
 for(i=2;i<=n;i++){ 
 if(n%i==0) {
 	tich=tich*i;
 }
 while(n%i==0) {
 	n/=i;
 }
 } 
 printf("%d\n",tich);
 } }
