//#include<stdio.h>
//int main() {
//	unsigned int i,t;
//	scanf("%d",&t);
//	for(i=1;i<=t;i++) {
//		int a;
//		scanf("%d",&a);
//		float b=(float) 1/a;
//		printf("%.15f\n",b);
//	}
//	return 0;
//}
#include<stdio.h> 
int main() { 
int n,a; 
scanf("%d",&n); 
while (n--) { 
scanf("%d",&a); 
if (a > 0) { 
printf("%.15f\n",(float)1/a); 
} 
} 
return 0;
}
