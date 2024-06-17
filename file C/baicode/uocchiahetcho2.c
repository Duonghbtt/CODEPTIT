#include<stdio.h>
#include<math.h>
int main() {
	int u;
	scanf("%d",&u);
	while(u--) {
	int n,i,dem;
	scanf("%d",&n);
	int a=sqrt(n);
	dem=0;
	for(i=1;i<=a;i++) {
		if(n%i==0) {
			if(i%2==0) {
				dem++;
			}
			if((i!=n/i)&&(n/i%2==0)) {
				dem++;
			}
		}
	}
	printf("%d\n",dem);
	}
	return 0;
}
