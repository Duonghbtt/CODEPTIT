#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int a;
	a=sqrt(n);
	int i,dem=0;
	for(i=1;i<=a;i++) {
		if(n%i==0) {
			if(i%2==0) {
				dem++;
			}
			if((i!=n/i)&&(n/i%2==0)){
				dem++;
			}
		}
	}
	printf("%d\n",dem);
	}
	return 0;
}
