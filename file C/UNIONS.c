#include<stdio.h>
union SinhVien{
	char ten[100];
	int tuoi;
	int diem;
};
int main(){
	union SinhVien sv;
	printf("Ban hay nhap thong tin cho sinh vien:\n");
	printf("Ban hay nhap ten cho sinh vien:\n");
	gets(sv.ten);
	printf("Ten cua sinh vien la: %s \n",sv.ten);
	printf("Ban hay nhap tuoi cho sinh vien:\n");
	scanf("%d",&(sv.tuoi));
	printf("Tuoi cua sinh vien la: %d\n",sv.tuoi);
	printf("Ban hay nhap diem cho sinh vien:\n");
	scanf("%d",&(sv.diem));
	printf("Diem cua sinh vien la : %d\n",sv.diem);
}
