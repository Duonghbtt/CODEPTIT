#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	char a;
	cin >>a;
	if((a>='A')&&(a<='Z')) {
		a+=32;
		cout <<a;
	}
	else cout <<a;
}
