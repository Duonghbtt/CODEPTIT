#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a=100,b=200,c=300;
	cout << a << " " << b << " " << c << endl; // in ra màn hình 
	cin >> a; // nhap gia tri a tu ban phim
	cin >> a >> b >> c ;
	cout<< a << endl; // in ra màn hình 
	cout<< " Xin chao " << endl ;
	cout << " Xin chao !\n";
	float d;
	cin >> d;
	cout << fixed << setprecision(4) << d << endl; // in ra do chinh xac thêm thu vien moi là include < iomanip >
	bool ok = true;
	cout << ok << endl; // 1 = true , 0 = false;
	char ktu;
	char ktu = 'r' // nhay don
	cin >> ktu;
	cout<< ktu << ;
	 return 0;
 }
