#include<stdio.h> 
#include<string.h> 
typedef struct { char xau[100]; }
Xau; 
int main(){ 
char s1[101]; 
char *p; 
gets(s1); 
p=strtok(s1," "); 
int n=1; 
Xau XAU[n]; 
while(p != NULL){ 
strcpy(XAU[n-1].xau,p); 
p=strtok(NULL," "); 
n++; 
} 
int i,j;
for( i=0; i<n-1; i++){//do n tang o vong while trc 
int check=1;
 for( j=0; j<i; j++){ 
 if( strcmp(XAU[i].xau, XAU[j].xau) == 0) check=0; 
 } 
 if(check != 0) 
 printf("%s ",XAU[i].xau); } }
