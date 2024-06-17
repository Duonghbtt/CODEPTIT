#include<stdio.h> 
#include<string.h>
 int main(){ 
 int t,i,j; 
 scanf("%d",&t); 
 while(t--){ 
 char c[18]; 
 scanf("%s",&c); 
 int ok=0; 
 for(i = 0; i < strlen(c); i++){ 
 for(j = i+1; j < strlen(c); j++){ 
 if(c[i] > c[j]) {
 ok=1;
 break;
 } 
 } 
 } 
 if(ok==0) {
 printf("YES\n"); 
 }
 else {
 printf("NO\n"); 
 }
 } 
 return 0; 
 }
