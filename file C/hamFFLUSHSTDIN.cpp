#include<stdio.h>
int main() {
	char ten[100];
	int tuoi;
	printf("Hay nhap tuoi ");
	scanf("%d",&tuoi);
	printf("Hay nhap ten ");
	fflush(stdin);
	gets(ten);
	printf("THong tin cua sinh vien la: \n");
	printf("Tuoi cua sinh vien la : %d \n",tuoi);
	printf("Ten cua sinh vien la: %s \n ",ten);
	return 0;
}
