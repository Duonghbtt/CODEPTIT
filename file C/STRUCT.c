#include<stdio.h>
struct SinhVien{
	char ten[100];
	int tuoi;
	int diem;
};
int main(){
	struct SinhVien sv;
	printf("Ban hay nhap ten cho sinh vien:\n");
	gets(sv.ten);
	printf("Ban hay nhap tuoi cho sinh vien : \n");
	scanf("%d",&(sv.tuoi));
	printf("Ban hay nhap diem cho sinh vien: \n");
	scanf("%d",&(sv.diem));
	printf("Thong tin sinh vien ban vua nhap la:\n");
	printf("Ten : %s \n",sv.ten);
	printf("Tuoi : %d\n",sv.tuoi);
	printf("Diem: %d\n",sv.diem);
	return 0;
}
