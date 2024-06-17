#include<stdio.h>
int main() {
	int step,i,a,b;
	scanf("%d %d",&a,&b);
	if(a>b) {
		step=a;
	}
	else {
		step=b;
	}
	i=step;
	while(i<=(a*b)) {
		if((i%a==0)&&(i%b==0)) {
		printf("%d",i);
		break;
		}
		i+=step;
	}
	return 0;
}
