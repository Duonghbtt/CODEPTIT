#include<stdio.h> 
#include<string.h> 
int main(){ 
int t;
scanf("%d",&t); 
while(t--){ 
int n=0; 
int c=0, 
l=0; 
char kitu=' '; 
while(kitu!='\n'){ 
int x; 
scanf("%d",&x);
 ++n; 
 if(x%2==0)++c;
  else ++l;
  kitu= getchar();
  } 
  if((n%2==0&&c>l)||(n%2==1 && c<l)) 
  printf("YES\n");
   else printf("NO\n"); 
   } }
