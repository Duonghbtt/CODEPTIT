#include <bits/stdc++.h>
using namespace std;

int X[100] , A[100] , C[100] , F[100][100] , n , B;

void Init(){
	cin >> n >> B;
	for(int i = 1; i <=n ;i++){
		cin >> A[i];
	}
	for(int i = 1 ; i<= n;i++){
		cin >> C[i];
	}
	for(int i = 0 ; i<=B ; i++){
		F[0][i]=0;
	}
}
void sapxep(){
    for(int i = 1; i < n;i++){
        for(int j = i+1 ; j <= n;j++){
            float x = 1.0*C[i]/A[i];
            float y = 1.0*C[j]/A[j];
            if(x < y){
                swap(C[i],C[j]);
                swap(A[i],A[j]);
            }
        }
    }
}
void in(){
	cout << " Sau khi sap xep lai la :" << endl;
	cout << "Gia tri c    : ";
	for(int i = 1; i <=n ;i++){
		cout << C[i] <<" ";
	}
	cout << endl;
	cout << "Khoi luong a : ";
	for(int i = 1 ; i<= n;i++){
		cout <<  A[i] <<" ";
	}
	cout << endl;
}
void quyhoachdong(){
	for(int i = 1 ; i <= n ;i++){
		for(int j = 0 ; j<= B ;j++){
			F[i][j]=F[i-1][j];
			if(j >= A[i] && F[i][j] < F[i-1][j-A[i]]+C[i]){
				F[i][j]=F[i-1][j-A[i]]+C[i];
			}
		}
	}
}

void Trace(){
	cout << "Gia tri toi uu "<< F[n][B] << endl;
	cout << "Phuong an toi uu : ";
	while(n!=0){
		if(F[n][B]!=F[n-1][B]){
			cout << n <<" ";
			B=B-A[n];
		}
		n--;
	}
}
int main(){
	Init();
	sapxep();
	in();
	quyhoachdong();
	Trace();
}