#include <bits/stdc++.h>

using namespace std;
// Ten , gpa , diachi , msv

/*

struct ten_struct {
    member;
};

*/
/*
struct SinhVien{
	string msv;
	string ten;
	double gpa;
	string dc;
	// Constructor1 : khong co kieu tra ve , ten = struct
	SinhVien(){
		msv ="abcd";
		ten = "nguyen van nam";
		gpa =3.0;
		dc="hai duong";
	}
	// moi lan khoi tao thi mac dinh thong tin struct nhu vay
	
	
	// Constructor 2 : khi ko khai bao du thi se bao constructor 1 , khai baoo du thi constructor 2 
	SinhVien(string ma , string name , double diem , string diachi){
		msv = ma;
		ten = name;
		gpa = diem;
		dc = diachi;
	}
	
	
	void in(){
			cout << msv <<" "<< ten <<" "<<fixed << setprecision(2) << gpa <<" "<<dc << endl;
	}
	void nhap(){
		cin >> msv;
		cin.ignore();
		getline(cin,ten);
		cin >> gpa;
		cin.ignore();
		getline(cin,dc);
	}
};
*/

//
//struct sophuc{
//	int a,b; // a+bj
//	
//	// nap chong toan tu 
//	// kieu_tra_ve operator(+,-...) (danhsachthamso){code}
///* Cách khai báo 1 : 
//	sophuc operator + (const sophuc other){
//		sophuc tong;
//		tong.a = a + other.a;
//		tong.b = b + other.b;
//		return tong;
//	}
//*/
// //  Cách khai báo 2 
//    friend sophuc operator + (const sophuc x , const sophuc y){
//    	sophuc tong;
//    	tong.a = x.a + y.a;
//    	tong.b = x.b + y.b;
//    	return tong;
//	}
//	
// // insertion >>
// 	
//	friend istream& operator >> (istream& in, sophuc &x){
//		in >> x.a >> x.b;
//		return in ;
//	}	
// // ectraction <<
// 	friend ostream& operator << (ostream& out, sophuc x){
//		out << x.a <<" "<< x.b;
//		return out ;
//	}	
///*	
//	bool operator == (const sophuc  other){
//		return a == other.a && b ==other.b;
//	}
//*/
//	friend bool operator == (const sophuc x , const sophuc y){
//		return x.a == y.a && y.b ==x.b;
//	}
//};

struct sv{
	string msv , ten;
	double gpa;
	
	bool operator < (const sv other){
		return gpa < other.gpa;
	}
};

struct time{
	int gio,phut,giay;
};

struct ve{
	string ten;
	time tg;
};

int main(){
//	SinhVien y{"abcd" ,"nguyen van nam" , 2.17 ,"Hai Duong"};
//	SinhVien x;
//	cin >> x.msv;
//	cin.ignore();
//	getline(cin , x.ten);
//	cin >> x.gpa;
//	cin.ignore();
//	getline(cin,x.dc);
//	cout << x.msv <<" "<< x.ten <<" "<<fixed << setprecision(2) << x.gpa <<" "<<x.dc << endl;
//	y.in();
//	y.nhap();
//	y.in();
//	// Constructor 1
//	SinhVien d;
//	d.in();
//	// Constructor 2 
//	SinhVien z("abcd","nguyen hai nam",3.2,"Nam Dinh");
//	z.in(); 

	//
//	sophuc a{1,2},b{3,4};
//	cout << a << b;
//	cin >> a >> b;
//	if(a==b) cout<<"Yes";
//	else cout << "No";

	int n;
	cin >> n;
	sv ds[n];
	for(int i=0;i<n;i++){
		cin >> ds[i].msv;
		cin.ignore();
		getline(cin,ds[i].ten);
		cin >> ds[i].gpa;
	}
	sort(ds,ds+n);
	
	for(sv x : ds){
		cout  << x.msv << " " << x.ten <<" " << x.gpa <<  endl;
	}
	
	
	ve a;
	getline(a.ten);
	cin >> a.ig.gio >> a.tg.phut >> a.tg.giay;
}
