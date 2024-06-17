#include <bits/stdc++.h>
using namespace std;

int n,matrix[1001][1001];
bool visited[1001];
// Nguyễn Thế Dương - B22DCKH023
void Init(){ // Nhập ma trận kề
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j=1; j <=n;j++){
            cin >> matrix[i][j];
        }
        visited[i]=false;
    }
}

void BFS(int u ){
    cout <<"BFS(" << u <<"): ";
    queue<int> Q;
    Q.push(u);
    visited[u]=true;
    while(!Q.empty()){
        int s = Q.front();
        cout << s <<" ";
        Q.pop();
        for(int t =1;t<=n;t++){
            if(visited[t]==false && matrix[s][t]){
                Q.push(t);
                visited[t]=true;
            }
        }
    }
    cout << endl;
}

void TPLT(){
    int slt = 0;
    for(int v = 1 ; v <= n ; v++){
        if(visited[v]==false){
            BFS(v);
            slt++;
        }
    }
    cout << "So luong thanh phan lien thong : " << slt << endl;
}
// Nguyễn Thế Dương B22DCKH023
int main(){
    Init();
    TPLT();
    return 0;
}