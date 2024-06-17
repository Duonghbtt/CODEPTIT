#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;// cach khai bao 
	cin >> s;
	cout << s << endl;
	string d = "Python"; // cach khai bao
	// string ko nhan dau cach
	// muon doc dau cach dung getline
	cin.ignore(); // de xoa enter trong cin 
	getline (cin,s); // giong gets trong C bi anh huong boi scanf() (hay cin>> ) 
	cout <<s << endl;
	// truy cap tung ki tu vao chuoi tuong tu mang 
	 //length() : chi ra do dai cua sau
	 cout << s.size() << endl;
	 cout << s.length() << endl;
	 // hai ham tren deu chi ra do dai cua xau ki tu
	// cthuc : xaukitu.length()
	// Muon duyet qua tung ki tu dung nhu sau:
	for(int i=0;i< s.length());i++{
		cout << s[i] << endl;
	}
	// hoac dung for(char x:)
	for(char x : s){
		cout << x << endl;
	}
	// noi hai xau dung toan tu cong
	string a = "python";
	string b = "java";
	a+=b;
	string c = a+b;
	cout << a << " " << c<< endl; // xau c bang xau a noi xau b ;
	//so sanh hai tu theo thu tu tu dien 
	string a = "abc";
	string b = "def";
	if(a>b){
		cout << "a lon hon b";
	}
	if(a==b){
		cout << " a bang b ";
	}
	else{
	 cout << "a nho hon b ";
	}
	// hoac so sanh bang ham compare 
	// a < b : -1;
	// a==b : 0;
	// a>b : 1;
	cout << a.compare(b) << endl;
	// muon cat xau kitu dung ham substr(vitribatdau,sokitucancat)
	string a = "abcdef";
	string b= a.substr(2,3);
	// chuyen xau thanh so tu nhien dung ham stoi chuyen thanh interger
	string a = "123456";
	int x = stoi(a);
	cout << x << endl;
	// neu so qua lon se bi tran thi se dung stoll(a) chuyen thanh long long
	long long x = stoll(a);
	// ham bien so nguyen thanh 1 chuoi dung ham to_string
	int n = 123456;
	string s = to_string(n);
	cout << s << endl;
	// trong C++ chap nhan mang char  trong C.
	// tach tung tu trong xau ki tu dung stringstream 
	string s = "java python   php   lap trinh";
	stringstream ss(s); // tach theo dau cach 
	string tmp;
	while(ss>>tmp){ // tach theo dau cach
		cout << tmp << endl;
	}
	// muon tach theo dau cham 
	while(getline(ss,tmp,'.')){
		cout << tmp << endl;
	}
	// Thu vien can dung tu gio la #include <bits/stdc++.h>
}
