#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	char n;
	cin >> n;
	// a->z: 97-122
	// A-Z : 65-90
	// 0-9 : 48-97
	if(( n >='a')&&(n<='z')){
		cout <<"YES";
	}
	else cout <<"NO";
}
