#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int n;
	cin >> n;
	long long tong =0;
	for(int i=1;i<=n;i++){
		tong = (long long) i + tong;
	}
	cout <<tong ;
}
