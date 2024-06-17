#include <stdio.h> 
int main () { 
int snd; 
scanf ("%d", &snd); 
int hey[219]; 
int boy[219]; 
long long min1=10e6; 
long long min2=10e6; 
int i;
for ( i=0; i<snd; i++) { 
scanf ("%d%d", &hey[i], &boy[i]); 
if(hey[i]<min1) min1=hey[i]; 
if(boy[i]<min2) min2=boy[i]; 
} 
printf ("%lld",min1*min2);
 return 0; 
 }
