#include <bits/stdc++.h>
using namespace std;

#define Max 100
#define Maxc 100000

int C[Max][Max]; // Ma trận trọng số
int D[Max]; // Độ dài đường đi
int Trance[Max]; // lưu lại vết dường đi
int n , m , S , F ;
// n : số đỉnh , S : đỉnh bắt đầu , F : Đỉnh kết thúc
// Nguyễn Thế Dương B22DCKh023

void nhap(){
    int i , u , v;
    cin >> n >> m >> S >> F;
    for( u = 1 ; u<= n ;u++){
        for( v = 1 ; v <=n ; v++){
            if(u==v) C[u][v]=0;
            else C[u][v]= Maxc;
        }
    }
    for(i = 1 ; i<=m ;i++){
        cin >> u >> v >> C[u][v];
    }
}

void Init(){
    for(int i = 1 ; i <=n ;i++){
        D[i]= C[S][i];
        Trace[i]=S;
    }
}

void Result(){
    if(D[F]==Maxc) cout << "Khong co duong di";
    else{
        cout << " Do dai " << S <<" den "<< F <<" : " << D[F] << endl;
        while(F!=S){
            cout << F << " <- ";
            F = Trace[F];
        }
    }
}

void Bellman_Ford(){
    int k , u , v;
    D[S]=0;
    for(k=1;k<=n-2;k++){
        for(v=1;v<=n;v++){
            // if(v!=S){
                for(u = 1 ; u<=n; u++){
                    if(D[V] > D[u] + C[u][v]){
                        D[v] = D[u] + C[u][v];
                        Trace[u]=v;
                    }
                }
            //}
        }
    }
}

int main(){
    nhap();
    Init();
    Bellman_Ford();
    Result();
    return 0;
}