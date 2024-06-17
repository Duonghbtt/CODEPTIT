#include <iostream>
using namespace std;
// Cach khai bao : Kieudulieu tenmang[soluongphantucuamang]
int main(){
	int a[100]; // mang tinhx
	int b[10] = {10,9,8,7,6,5,4,3,2,1};
	// chi so cua mang n chay tu 0 -> n-1.
	cout << b[2] << endl;
	int n;
	cin >> n;
	int c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; // nhap gia tri cho phan tu o vi tri i 
	}
	// cach in tuong tu nhu ngon ngu C 
	int d[10]={0} // khai bao mang co tat ca cac phan tu = 0 
	// cach duyet nhanh for each
	for ( int x:b){
		cout << x <<" ";
	}
	return 0;
}	
