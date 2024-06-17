#include <math.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int min = b*round(a/b);
	if(min>=a) cout << min;
	else {
		min = b*(a/b+1);
		cout << min;
	}
	/*
	cach 2
	min = b*((a+b-1)/b);
	*/
}
