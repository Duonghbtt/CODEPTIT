#include<stdio.h>
#include<math.h>
int main () {
	int m,n,t,u,a;
	a=0;
	scanf("%d %d",&m,&n);
		if((0<m)&&(m<=n)&&(n<=999999999)) {
			for(t=m;t<=n;t++) {
				u=sqrt(t);
				if(t==pow(u,2)) {
					a++;
				}
			}
			printf("%d\n",a);
		for(t=m;t<=n;t++) {
				u=sqrt(t);
				if(t==pow(u,2)) {
					printf("%d\n",t);
				}
			}
		}
	return 0;
}
