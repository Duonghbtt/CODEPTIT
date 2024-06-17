#include <iostream>
#include<iomanip>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int tong = a+b;
	int hieu = a-b;
	long long tich =(long long) a*b;
	float thuong = 1.0*a/b;
	cout << tong <<" "<<hieu<<" "<<tich<<" ";
	cout << fixed << setprecision(4) << thuong;
	return 0;
}
