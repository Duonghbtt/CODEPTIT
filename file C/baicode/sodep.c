#include<stdio.h> 
#include<math.h> 
long long stn(long long n){ 
	long long dao=0; 
	long long m=n; 
	while(m>0){ 
	dao= dao*10 + m%10; 
	m/=10; 
	} 
	if(dao!=n) 
	return 0; 
	return 1; 
} 
int main() { 
	long long n,t; 
	scanf("%lld", &t); 
	while(t--){ 
	scanf("%lld", &n); 
	long long m=n; 
	long long c=n/10; 
	long long a=n%10; 
	long long dem=-1; 
	while(m>0){ 
	dem++;
	 m=m/10; } 
	 long long b=n / pow(10,dem); 
	 long long k= c-(b* pow(10,dem-1)); 
	 if(a==2*b || b==2*a){ 
	 if(stn(k)==1) printf("YES\n"); 
	 else printf("NO\n"); 
	 } 
	 else printf("NO\n"); 
	 printf("\n"); 
	 } 
	 }
