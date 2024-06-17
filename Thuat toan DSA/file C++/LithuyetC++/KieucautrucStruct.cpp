#include <bits/stdc++.h>

using namespace std;

// Ten , gpa , dia chi , msv

struct ten_struct{
	// member
};

struct Sinhvien{
	string msv ;
	string ten;
	double gpa;
	string dc;
};

int main(){
	Sinhvien x;
	cin >> x.msv;
	getline (cin,x.ten);
	Sinhvien x{"abcd","nguyen van nam",2.17,"hai duong"};
}
