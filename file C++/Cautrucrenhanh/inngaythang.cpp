#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

bool namnhuan(int n){
	if(n<0) return false;
	else{
		if((n%400==0)||((n%4==0)&&(n%100)!=0)) return true;
		else return false;
	}
}
int main(){
	int t,n;
	cin >> t >> n;
	if((t<=0)||(n<=0)||(t<1)||(t>12)) cout << "INVALID";
	else{
		if(namnhuan(n)){
			switch(t) {
				case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12: 
				cout << " 31";
				break;
				case 2:
				cout << " 29";
				break;
				default:
				cout << "30";
				break;
			}
		}
		else{
			switch(t) {
				case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12: 
				cout << " 31";
				break;
				case 2:
				cout << " 28";
				break;
				default:
				cout << "30";
				break;
			}
		}
	}
}
