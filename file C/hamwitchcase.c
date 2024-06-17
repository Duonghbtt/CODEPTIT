#include<stdio.h>
int main() {
	int a;
	printf("Hay nhap gia tri cho a:");
	scanf("%d",&a);
	switch(a) {
		case 1:
			printf("Day la so mot");
			break;
		case 2:
			printf("Day la so hai");
			break;
		case 3:
			printf("Day la so ba");
			break;
		case 4:
			printf("Day la so bon");
			break;
	}
	return 0;
}
