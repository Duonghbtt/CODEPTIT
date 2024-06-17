#include<stdio.h>
int main() {
	int a;
	printf("Hay nhap gia tri cua a la : ");
	scanf("%d",&a);
	int b;
	printf("Hay nhap gia tri cua b la : ");
	scanf("%d",&b);
	int tong = a+b;
	printf("Gia tri tong cua a va b la : %d \n",tong);
	int hieu = a-b;
	printf("Gia tri hieu cua a va b la : %d \n", hieu);
	int tich = a*b;
	printf("Gia tri cua tich a va b la : %d \n", tich);
	int chia= a/b;
	printf("Gia tri cua thuong a va b la : %f \n",chia);
	int du=a%b;
	printf("Gia tri cua phan du a chia cho b là %d \n",du);
	return 0;
}
