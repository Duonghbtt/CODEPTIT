#include<stdio.h>
void USCLN2(long * a,long b){
	while(b!=0){
		int tmp=*a%b;
		*a=b;
		b=tmp;
	}
}
int main()
{
	long a, b, r;
	
	scanf("%ld%ld",&a, &b);
	if(a> 0 && b>0)
	{
		r = a;
		USCLN2(&a,b); 
		printf("%ld\n%lld", a, (long long) r*b/a);
	}
}
