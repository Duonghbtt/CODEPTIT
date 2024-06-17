#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int nam = n/365;
	n=n-n/365*365;
	int thang=n/7;
	int ngay = n-n/7*7;
	cout << nam <<" "<<thang<<" "<<ngay;
}
