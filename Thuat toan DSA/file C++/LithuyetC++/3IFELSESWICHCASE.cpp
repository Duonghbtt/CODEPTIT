#include <iostream>
using namespace std;
int main(){
//	if(100>50){
//		cout << "YES" << endl;
//	}
//	else cout << " NO " << endl;
//	int n ;
//	cin >> n ; 
//	if (n) { // 0 : false , != 0 true
//		cout << "YES" << endl;
//	}
	int day=4;
	switch (day) {
		case 1:
		cout << "Monday" << endl;
		break;
		case 2: // tuong tu else if
		cout << "Tuesday" << endl;
		break;
		case 3 : case 4 : case 5 : // gop nhieu case 
		cout << " HELOO ";
		break;
		default : // tuong tu else
			cout << "du lieu khong hop le";
	}
	return 0;
}
