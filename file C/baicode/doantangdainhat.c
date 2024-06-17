#include <stdio.h> 
int main () { 
int t,dt; 
scanf("%d",&t); 
for ( dt=1; dt<=t; dt++) { 
int n; scanf("%d",&n);
 int a[n],i;
  for ( i=0; i<n; i++) { 
  scanf("%d",&a[i]); 
}
 int dem=1, max=1; 
 for (i=0; i<n-1; i++) {
  if (a[i]<a[i+1]) dem++;
   else { if (max<dem) max=dem; dem=1; } 
} 
printf("Test %d:\n%d\n",dt,max); 
int kt=1; 
for (i=0; i<n-1; i++) { 
if (a[i]<a[i+1]) kt++; 
else kt=1; 
if (kt==max) { 
int j;
for ( j=i+1-max+1; j<=i+1; j++) { 
printf("%d ",a[j]); 
} 
printf("\n"); 
} } } }
