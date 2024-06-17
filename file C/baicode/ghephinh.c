#include<stdio.h>
#include<math.h>
void swap(long long *a,long long *b){
	long long tmp=*b;
	*b=*a;
	*a=tmp;
}
long long sochinhphuong(long long a){
	long long b=sqrt(a);
	if(b*b==a) return b;
	return 0;
}
int main(){
	long long r1,d1,r2,d2,r3,d3;
	scanf("%lld%lld%lld%lld%lld%lld",&r1,&d1,&r2,&d2,&r3,&d3);
	if(r1 > d1) swap(&r1,&d1);
	if(r2 > d2) swap(&r2,&d2);
	if(r3 > d3) swap(&r3,&d3);
	long long dientich=r1*d1+r2*d2+r3*d3;
	long long y=sochinhphuong(dientich);
	if(y==0) printf("NO");
	else{
		if(d1==d2 && d2==d3 && d3==y){
			printf("YES");
		}
	else{
		if(d2>d1){
			swap(&r1,&r2);
			swap(&d1,&d2);
		}
		if(d3>d1){
			swap(&r1,&r3);
			swap(&d1,&d3);
		}
		if(d1==y){
			if(r2+r3==y||d2+d3==y||r2+d3==y||d2+r3==y){
				printf("YES");
			}
			else printf("NO");
		}
		else printf("NO");
	}
}
}
