#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	char a;
	cin >>a;
	if((a >='A')&&(a<='Y')){
		a+=33;
		cout << a;
	}
	else if((a=='Z')&&(a=='z')) cout <<"a";
	else if((a >='a')&&(a<='y')){
		a+=1;
		cout<<a;
	}
	else cout <<"INVALID";
}
