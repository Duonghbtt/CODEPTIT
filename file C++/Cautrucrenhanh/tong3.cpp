#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >>n;
	double tong=1-1/((double)n+1);
	cout << fixed << setprecision(2) << tong;
}
