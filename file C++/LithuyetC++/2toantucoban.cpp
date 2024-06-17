#include <iostream>
using namespace std;
int main() {
	int a;
	cout << " Xin chao !\n"; // in ra dong chu xin chao
	cin >> a; //nhap gia tri cho bien a
	cout << a << endl; // in ra gia tri a
	a=200; // toan tu gan 
	cout << a <<  endl;
	// toan tu toan hoc + , - , * , / , % ( lay du )
	 a = 100 ;
	 int b =200;
	int c = a+b; // c=300;
	cout << c << endl;
	float thuong = (float) a/b;
	// float thuong = 1.0 * a/b;
	cout << thuong << endl;
	a++; // tang sau 
	// ++a;  tang truoc
	// vd a = 100 , int b = a++ thì in ra a= 101 và b = 100 
	// a = a+b tuong tu a += b ;
	// toan tu so sanh : < > <= >= == !=
	// toan tu logic : AND(&&) OR(||) NOT(!(menhde))
	return 0;
}
