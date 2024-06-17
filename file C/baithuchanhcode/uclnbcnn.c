#include<stdio.h>
int main() {
	int i;
	scanf("%d",&i);
	while(i--){
	int a,b;
	scanf("%d %d",&a,&b);
	int f;
	f=a*b;
	if((a>0)&&(b>0)) {
		int t;
		while(b!=0) {
			t=b;
			b=a%b;
			a=t;
		}
		printf("%d %d",f/a,a);
	}
	else{
		printf("Nhap sai");
	}
	}
	return 0;
}
