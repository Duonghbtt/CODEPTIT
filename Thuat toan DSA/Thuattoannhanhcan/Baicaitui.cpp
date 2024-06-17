#include <bits/stdc++.h>
using namespace std;

int X[100] ; // phuong an toi uu cua bai toan
int n; // so luong do vat
float b , weight =0 ; // trong luong tui
float cost = 0 ; // gia tri su dung phuong an hien tai
int XOPT[100]; // phuong an toi cua bai toan
float FOPT=0; // Gia tri toi uu cua bai toan
float A[100],C[100]; // trong luong va gia tri su dung cua vat i

void Init(){
    cin >> n >> b;
    for(int i = 1 ;i<=n;i++){
        cin >> A[i] >> C[i];
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
void Result(){
    cout <<"Gia tri toi uu:" << FOPT << endl;
    cout << "Phuong an toi uu ";
    for(int i = 1 ;i <= n;i++){
        cout << XOPT[i] <<" ";
    }
}

void Update(){
    if(cost > FOPT){
        FOPT = cost;
        for(int i = 1 ; i<=n;i++){
            XOPT[i]=X[i];
        }
    }
}

void Back_Track(int i ){
    int j , t = (int) (b-weight)/A[i]; // Gia tri khoi dau
    for(int j = t ; j >= 0 ;j--){
        X[i]=j;
        weight = weight + A[i]*X[i]; // trong luong phuong an bo phan
        cost = cost + C[i]*X[i]; // gia tri phuong an bo phan
        if(i==n) Update(); // Ghi nhan ky luc
        else if(cost + (C[i+1]*((b-weight)/A[i+1]))>FOPT) // kiem tra can
            Back_Track(i+1);
        weight = weight - A[i]*X[i]; 
        cost =cost - C[i]*A[i];
    }
}
int main(){
    Init();
    sapxep();
    Back_Track(1);
    Result();
}