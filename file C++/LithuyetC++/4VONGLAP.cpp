#include <iostream>
using namespace std;
int main(){
	for( int i = 1 ; i <= 10 ;i++){ // tuong tu C , 1 trong 3 statement co the khuyet
		cout << " Hello \n";
	}
	// su dung bien i trong for thi bien ay chi thuoc pham vi vong for;
	//  break vong lap se dung luon tai do
	// continue vong lap se ko thuc hien code o duoi nua , nhay sang vong lap khac 
	int i=0;
	while ( i<5){
		cout << i << endl;
		++i;
	}
	i=0;
	do {
		cout << i << endl;
		++i;
	}
	while (i<10);
	return 0;
}
