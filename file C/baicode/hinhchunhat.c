#include<stdio.h> 
int main (){ 
int cr,cd,i,j; 
scanf("%d%d",&cr,&cd); 
for(i=1;i<=cd;i++){ 
for(j=1;j<=cr;j++){ 
if(i==1||i==cd||j==1||j==cr){ 
printf("*");
} 
else printf(" "); 
} 
printf("\n\n"); 
}
 }
