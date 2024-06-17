#include<stdio.h>
int main() {
	float a,b;
	scanf ("%f %f",&a,&b);
//	if(a!=0) {
//		float c=-b/a;
//		printf("%.2f",c);
//	}
//	else if((a==0)&&(b==0)) {
//		printf("Vo so nghiem");
//	}
//	else if((a==0)&&(b!=0)) {
//		printf("Vo nghiem");
//	}
//	return 0;
//}
     if(a==0) {
     	if(b==0) {
     		printf("VSN");
		 }
		printf("VN");
	 }
	 else {
	 	printf("%f",-b/a);
	 }
	 return 0;
	 }
