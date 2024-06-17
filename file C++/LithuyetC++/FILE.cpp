#include <fstream>

using namespace std;
 // doc file len chuong trinh thi dung ifstream
 // doc dulieu tu chuong trinh xuong 1 file ofstream
 
int main(){
	//doc file
	ifstream file;
	file.open("text1.txt");
	//viet trong day 
	int a[20];
	int n;
	file >> n;
	cout << "gia tri cua n  : "<< n << endl;
	for(int i=0;i<n;i++){
		file >> a[i];
	}
	for(int i=0;i<n;i++){
		cout <<"gia tri thu "<<i+1<<"la : "<< a[i] << endl;
	}
	file.close();
	
	//ghi file;
	ofstream file1("giatri.txt");
	for(int i=n;i>0;i--){
		file1 << a[i];
	}
	file1.close();
	// eof : tra ve true khi con tro da toi cuoi file va voi false thi nguoc lai
	while(!file.eof()){ // khi chua toi cuoi file thi tiep tuc doc
	}
	// file >> str : ta chi doc duoc chuoi cho toi khi no gap dau cach
	// getline(file,str) : lay du lieu lay duoc ca dau cach
	
	// FILE *freopen(const char *filename, const char *mode, FILE *stream)
	// vd : freopen("DATA.in","r",stdin);
	// "r" : mo 1 file de doc . File phai ton tai
	// "w" : tao 1 file trong de ghi . Neu 1 file cung ten da ton tai , noi dung
	// cua no bi tay di va file duoc xem nhu 1 file trong moi
	//"a" : Phu them (append) toi 1 file . Voi cac hoat dong ghi , phu them du lieu
	//tai cuoi file . File duoc tao neu no chua ton tai
	//"r+" : mo 1 file de ghi va doc . File phai ton tai
	//"w+" Tao 1 file trong de ghi va doc
	//"a+" mo mot file de doc va phu them
	// stdin de doc va stdout de ghi 
	
	
}
