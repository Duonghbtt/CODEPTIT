#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a==0){
		if(b==0){
			if(c==0){
				cout<<"INF";
			}
			else cout <<"NO";
		}
		else{
			double x= (double)-c/b;
			cout << fixed << setprecision(2) << x;
		}		
	}
	else{
	double det = (double)b*b-4*a*c;
	double x1 = (-b-sqrt(det))/(2*a) , x2 = (-b+sqrt(det))/(2*a);
	if(det>0) cout << fixed << setprecision(2) << x2 << " " << x1;
	else if(det==0) cout << fixed << setprecision(2) << x1;
	else cout << "NO";
	}
}
