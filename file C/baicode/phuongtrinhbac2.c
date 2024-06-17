#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,d,e,f;
	scanf("%f %f %f",&a,&b,&c);
	if(a==0) {
		if(b==0) {
			if(c==0) {
				printf("VSN");
			}
			else {
				printf("NO");
			}
		}
		else {
			printf("%.2f",-c/b);
		}
	}
	else {
		d=b*b-4*a*c;
		e=(-b-sqrt(d))/(2*a);
		f=(-b+sqrt(d))/(2*a);
		if(d>0) {
			printf("%.2f %.2f",f,e);
		}
		if(d==0) {
			printf("%.2f",e);
		}		
		else {
			printf("NO");
		}
	}
	return 0;
}
