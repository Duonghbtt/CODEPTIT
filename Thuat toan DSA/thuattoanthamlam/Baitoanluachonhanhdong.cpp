#include <bits/stdc++.h>
using namespace std;

int Start[100] , Finish[100] , n , XOPT[100] , dem = 0;
int n ;
void nhap(){
	cin >> n;
	for(int i =1 ; i<=n ;i ++){
		cin >> Start[i];
		cin >> Finish[i];
		XOPT[i]=false;
	}
}

void Sapxep(){
	for(int i = 1; i<=n-1 ;i++){
		for(int j = i+1 ;  j <= n; j++){
			if(Finish[i]>Finish[j]){
				swap(Finish[i],Finish[j]);
				swap(Start[i],Start[j]);
			}
		}
	}
}

void Result(){
	cout << dem << endl;
	for(int i = 1 ; i <=n  ; i++){
		if(XOPT[i]){
			cout <<  i <<" ";
		}
	}
}

void Thamlam(){
	nhap();
	Sapxep();
	int i = 1; 
	XOPT[i]=true;
	dem = 1;
	for(int j = 2 ; j <= n ;j ++){
		if(Finish[i]<=Start[j]){
			dem++;
			i=j;
			XOPT[i]=true;
		}
	}
	Result();
}

int main(){
	Thamlam();
}