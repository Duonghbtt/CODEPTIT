#include<stdio.h>
#include<stdlib.h>
struct SoNguyen{
	int dulieu;
	struct SoNguyen *tiep;
};
void taoDanhSach(struct SoNguyen *&pdau){
	int repeat;
	Songuyen *p;
	do {
		if(pdau==NULL){
			pdau=(SoNguyen*)malloc(sizeof(SoNguyen));
			p=pdau;
		}
		else{
			p=pdau;
			while(p->tiep != NULL) p=p->tiep;
			p->tiep=(SoNguyen*)malloc(sizeof(SoNguyen));
			p=p->tiep;
		}
		printf("Nhap du lieu cho danh sach: \n");
		scanf("%d",&(p->dulieu));
		p->tiep=NULL;
		printf("Ban co muon tiep tuc hay khong?");
		scanf("%d",&repeat);
	}while(repeat!=0);
}
void inDanhSach(struct SoNguyen *&pdau){
	SoNguyen *p=dau;
	if(pdau==NULL) return ;
	while(p!=NULL){
		printf("%d\t",p->dulieu);
		p=p->tiep;
	}
}
int main() {
	struct SoNguyen *pdau=NULL;
	taoDanhSach(pdau);
	inDanhSach(pdau);
	return 0;
}
