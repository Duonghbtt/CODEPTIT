#include<stdio.h>
struct Sinhvien{
	char ten[100];
	int tuoi;
	int diem;
};
int main(){
	struct Sinhvien sv;
	struct Sinhvien *p=&sv;
	printf("Ban hay nhap ten cho sinh vien: \n");
	gets(p->ten);
	printf("Ban hay nhap tuoi cho sinh vien : \n");
	scanf("%d",&(p->tuoi));
	printf("Ban hay nhap diem cho sinh vien: \n");
	scanf("%d",&(p->diem));
	printf("Thong tin sinh vien ban vua nhap la:\n");
	printf("Ten : %s \n",p->ten);
	printf("Tuoi : %d\n",p->tuoi);
	printf("Diem: %d\n",p->diem);
	return 0;
}
