#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	float a,b,c,d;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	float u=c-a,v=d-b;
	float kc=(float)u*u+v*v;
	printf("%.4f\n",sqrt(kc));
}}
