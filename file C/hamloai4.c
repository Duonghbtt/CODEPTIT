#include<stdio.h>
int tinhtong(int a, int b) {
	int tong =a+b;
//	printf("%d",tong);
	return tong;
}
int main() {
	int tong = tinhtong(2,3);
	printf("%d",tong);
	return 0;
}
