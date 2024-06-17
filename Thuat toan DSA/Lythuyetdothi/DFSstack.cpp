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

void dfs_stack(int u){
    int Stack[Max],dau=1,s,t;
    Stack[dau]=u;
    chuaxet[u]=false;
    cout << u <<" ";
    while(dau > 0){
        s=Stack[dau];
        dau--;
        for(t=1 ; t<=n;t++){
            if(chuaxet[t]&&A[s][t]){
                cout << t <<" ";
                chuaxet[t]=false;
                Stack[++dau]=s;
                Stack[++dau]=t;
                break;
            }
        }
    }
}

int main(){
    int u;
    Init();
    cout <<"\n Đỉnh bắt đầu duyệt : ";
    cin >> u;
    dfs_stack(u);
}