#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	double dis = sqrt(pow(c-a,2)+pow(d-b,2));
	cout << fixed << setprecision(2) << dis;
}
