#include <bits/stdc++.h>
using namespace std;

int n , m;
vector <int> adj[1001];
bool visited[1001];
//Nguyễn Thế Dương - B22DCKH023
void inp(){ // chuyen ds canh sang ds ke
    cin >> n >> m;
    for(int i = 0 ;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}

void dfs(int u){
    cout << u << " ";
    // đánh dấu là u đã được thăm
    visited[u] = true;
    for(int v : adj[u]){
        // Nếu đỉnh v chưa được thăm
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    inp();
    dfs(1);
}