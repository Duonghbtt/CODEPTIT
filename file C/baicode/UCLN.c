#include<stdio.h>
int main() {
	int i,a,b;
	scanf("%d",&i);
	while(i--) {
		scanf("%d %d",&a,&b);
		if((a>0)&&(b>0)) {
			while(a!=b) {
				if(a<b) {
					int t;
					t=a;
					a=b;
					b=t;
					a=a-b;
				}
				else{
					a=a-b;
				}
				}
				printf("%d\n",b);
			}
		}
	return 0;
}
