#include<bits/stdc+.h>
#include <vector>

using namespace std;

int main(){
	// Vecto nhu 1 mang dong khong can 1 kich thuoc co dinh 
	// vecto<kieu_du_lieu> ten_vecto
	vecto<int> v;
	// ham push_back() day 1 phan tu vao vecto
	v.push_back(10);
	v.push_back(20);
	// cu moi lan them vao thi phan tu moi duoc them vao cuoi vecto
	// ham size() : kich thuoc vecto
	cout << v.size() << endl;
	// co the truy cap theo chi so 
	cout << "Phan tu dau tien trong vecctor : "<< v[0] << endl;
	cout << "Phan tu cuoi cung trong vector : "<< v[v.size()-1] << endl;
	cout << "Phan tu cuoi cung trong vector : "<< v.back() << endl;
	// Duyet theo chi so . Duyet thong qua index , for each.
	for(int i = 0 ; i<v.size();i++){
		cout << v[i] << endl;
	}
	for(int x:v){
		cout << x << endl;
	}
	// v.end() : phan tu sau phan tu cuoi cung
	// Duyet theo iterator : con tro thong minh 
	for(vector<int>::iterator it = v.begin();it!= v.end;++it){
		cout << *it << endl;
	}
	// Duyet theo auto : thay cho so , string 
	for(auto it = v.begin();it!= v.end(); ++it){
		cout<<*it<<endl;
	}
	cout << v[2] << endl;
	// hoac cung thong qua *(v.begin()+index)
	cout << *(v.begin()+2)<<endl;
	int n ; cin >>  n;
	vector<int> v(n) // khai bao vecto nhung da co n phan tu ;
	for(int i = 0 ;i<n;i++){
		cin >> v[i];
	}
	// hoac cach khac nhu sau : dung bien tam
	int n ; cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>> x;
		v.push_back(x);
	}
	// hoac khoi tao gia tri cho vecto
	int n;
	cin>>n;
	vecto<int> v(n,100);
	for(int i = 0;i<n;i++){
		cout << v[i] << endl;
	}
	v.push_back(20); // van duoc noi rong vector ra duoc 
	// dung cho ca long long va string nhu int 
	// hoac vecto trong vecto luon 
	// Trong string ta cung co the dung vector de tach 
	string s =" Ngon ngu lap          trinh "
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	for(string x:v){
		cout << x << endl;
	}
}
