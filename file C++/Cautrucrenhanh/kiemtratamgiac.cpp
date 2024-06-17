#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a==b&&b==c&&c==a) cout<<"1";
	else if((a==b)||(a==c)||(b==c)){
			if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a) cout<<"4";
		else cout << "2";
	}
	else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
		if((b==c)||(a==b)||(a==c)) cout<<"4";
		else cout<<"3";
	}
	else if((a!=0)&&(b!=0)&&(c!=0)&&(a+b>c)&&(a+c>b)&&(b+c>a)) cout << " 5";
	else cout << "INVALID";
}
