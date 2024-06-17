#include <bits/stdc++.h>
using namespace std;

// Nguyễn Thế Dương B22DCKH023

#define Max 50
int A[Max][Max] , n ;
bool chuaxet[Max];

void Init(){ // Nhập ma trận kề
    cin >> n;
    for(int i =1 ; i <=n;i++){
        for(int j=1;j<=n;j++){
            cin >> A[i][j];
        }
    }
}

void bfs(int u){
    int queue[Max] , low = 1 , high = 1 , v;
    queue[low]=u;
    chuaxet[u]=false;
    cout <<"\n Ket qua : ";
    while(low<=high){
        u = queue[low];
        low=low+1;
        cout << u <<" ";
        for(v = 1 ;v <=n;v++){
            if(A[u][v]&&chuaxet[v]){
                high+=1;
                queue[high]=v;
                chuaxet[v]=false;
            }
        }
    }
}

int main(){
    int u;
    Init();
    cout <<"\n Đỉnh bắt đầu duyệt : ";
    cin >> u;
    bfs(u);
}