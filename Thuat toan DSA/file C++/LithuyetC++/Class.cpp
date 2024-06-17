#include <bits/stdc++.h>

// class  : lop
// thuoc tinh : attribute
// phuong thuc : method , behavior
// object : doi tuong
// constructor : ham khoi tao
//destructor : ham huy , ko co kieu tra ve , ten trung voi class , co dau ~
// this pointer
// setter getter
// SV001=>SV002=>SV003 : bien static
// friend function 
// friend class
// forward declaration : khai baos truoc;

// Operator overloading
// << >>
// cout : ostream
// cin : istream



/*
class TenClass{
	Thuoc tinh va phuong thuc;
	
};
 - Encapsulation : Tính dóng gói 
 - Access modifier :
    + Private : thuoc tinh thì dùng , chi dung trong class , ko truy cap o ngoai class
    + Public	: Phuong thuc thì dùng
    + Protected : tính kê thùa
*/

using namespace std;

class GiaoVien;
class SinhVien;



class GiaoVien{
	private:
		string khoa;
	public:
		void update(SinhVien&);
};

class SinhVien{
	friend class GiaoVien;
	private:
		string id,ten,ns;
		double gpa;
		static int dem;
	public :
		SinhVien(); // constructor 1
		SinhVien(string , string , string , double); // constructor 2
		void xinchao();
		void dihoc();
		~SinhVien(); // ham huy 
		void nhap();
		void in();
		double getGPA() ; // ham tra ve 
		void setGpa();    // ham gan
		void tangDem();
		int getDem();
		friend void inthongtin(SinhVien);
		friend void chuanhoa(SinhVien&);
		friend istream& operator >> (istream &in , SinhVien &a);
		friend ostream& operator << (ostream &out , SinhVien a);
		bool operator < (SinhVien a);
		friend bool operator < (SinhVien a , SinhVien b);
		
 };
 class SoPhuc{
 	private : 
 		int thuc,ao;
 	public:
 		SoPhuc operator + (SoPhuc another);
 		friend SoPhuc operator - (SoPhuc a , SoPhuc b);
	};
 
 SoPhuc SoPhuc::operator +(SoPhuc another){
 	SoPhuc tong;
 	tong.thuc=this->thuc + another.thuc;;
 	tong.ao = this->ao + another.ao;
 	return tong;
 }
 
bool operator < (SinhVien a , SinhVien b){ // khi dung sort dua luon tieu chi nay khong can cmp nua
	return a.gpa < b.gpa;
}
bool SinhVien :: operator < (SinhVien a){
	return this->gpa < a.gpa;
}
istream& operator >> (istream &in , SinhVien &a){
	cout << "Nhap id :";
	in >> a.id;
	getline(in,a.ten);
	in >> a.ns >> a.gpa;
	return in;
}
ostream& operator << (ostream &out , SinhVien a){
	cout << a.id <<" "<<a.ten <<" "<< a.ns <<" "<<a.gpa << endl;
}
		

void chuanhoa(SinhVien &a){
	string res = "";
	stringstream ss(a.ten);
	string token;
	while(ss>>token){
		res+=toupper(token[0]);
		for(int i=1;i<token.size();i++){
			res+=tolower(token[i]);
		}
		res+=" ";
	}
}


void inthongtin(SinhVien a){
	cout << a.id <<" "<< a.ten << endl;
}


int SinhVien::dem=0;
void SinhVien::tangDem{
	++dem;
}
int SinhVien::getDem(){
	return this->dem;
}
// Implementation
SinhVien::SinhVien(){
	cout << "Ham kho tao duoc goi" << endl;
	this->id=this->ten=this->ns="";
	this->gpa=0;
	// bo this cung ko sao 
}
SinhVien::SinhVien(string ma , string name , string birth , double diem){
	cout << "Ham khoi tao co tham so duoc goi" << endl;
	id=ma;
	ten = name ; 
	ns = birth ;
	gpa = diem;
}
// con tro this de truy cap private
	this->id=id;
	thid->ten=ten;
	this->ns=ns;
	this->gpa = gpa;
void SinhVien::xinchao(){
	cout << "Hello" << endl;
}
void SinhVien::dihoc(){
	cout << "Di hoc" << endl;
}

SinhVien::~SinhVien(){
	cout << "Doi tuong duoc huy tai day !\n";
}
void SinhVien::nhap(){
	++dem;
	this->id="SV" + string(3-to_string(dem).length(),'0')+to_string(dem);
	cout <<"Nhap id :"; cin >> this->id;
	cin.ignore();
	cout <<"Nhap ten :"; cin >> this->ten;
	cout <<"Nhap ns : ";cin >> this->ns;;
	cout <<"Nhap diem : ";cin >> this->gpa;
}
void SinhVien::in(){
	cout << this->id << " " << this->ten << " "<< this->ns << " "<< fixed << setprecision(2)<<this->gpa<< endl;
}

// muon truy cap phai xay dung ham tra ve getter
double SinhVien::getGPA(){
	return this->gpa;
}
bool cmp(SinhVien a , SinhVien b){
	return a.getGPA() > b.getGPA();
}
// ham gan
void SinhVien::setGpa(double gpa){
	return this->gpa = gpa;
}
void GiaoVien::update(SinhVien &x){
	x.gpa = 3.20;
}
int main(){
	SinhVien x; // constructor 1
	SinhVien x("123";"Nguyen Van A";"22/11/2004";2.4); // constructor 2
	x.dihoc();
	if(1){
		SinhVien y;
	}
	x.xinchao();
	SinhVien z;
	z.nhap();
	z.in();
	SinhVien a[100];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
		a[i].in();
	}
	SinhVien u;
	u.setGpa(2.18); // ham gan setter
	// class gan duoc cho hai SinhVien y = x 
	
	//Bien static : chung cho ca class
	SinhVien j;
	j.tangDem(); // dem = 1
	j.tangDem(); // den = 2
	SinhVien k;
	cout << k.getDem() << endl; // in ra = 2;
	
	SinhVien m;
	m.nhap();
	GiaoVien n;
	n.update(m);
	m.in();
	
	
}
