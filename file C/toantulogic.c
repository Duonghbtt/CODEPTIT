#include<stdio.h>
int main() {
	int a;
	printf("Hay nhap gia tri a :");
	scanf("%d",&a);
	int b;
	printf("Hay nhap gia tri b :");
	scanf("%d",&b);
	int kiemtra=(a>b)&&(a!=b);
	printf("Ket qua kiem tra a va b la: %d",kiemtra);
	return 0;
}  
