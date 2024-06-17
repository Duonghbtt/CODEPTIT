 #include<stdio.h> 
 #include<ctype.h>
  #include<string.h> 
  #include<stdlib.h> 
  int main(){ 
  int t; 
  scanf("%d\n", &t); 
  while(t--){ 
  char s[200]; 
  gets(s); 
  int c = strlen(s), cnt; 
  if(s[c - 1] == ' ') 
  cnt = 0; 
  else cnt = 1; 
  int i;
  for(i = 0; i < c - 1; i++){ 
  if(s[i] != ' '&& s[i+1] == ' '){ 
  cnt++;
   } } 
   printf("%d\n", cnt); 
   } }
