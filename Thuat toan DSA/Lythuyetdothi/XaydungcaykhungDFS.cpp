#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];
 // Nguyễn Thế Dương B22DCKH023
 
void inp(){
    cout << "Nhap vao so dinh & so canh cua DT: \n";
    cin >>n >> m;
    cout << "Nhap vao cac dinh theo thu tu: Dinh dau / Dinh cuoi \n";
    for(int i=1; i<=m; i++) {
        cout << "Canh " << i << ": ";
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        sort(ke[i].begin(), ke[i].end());
    }
}

void dfs(int u){
    visited[u] = 1;
    cout << "Cay khung cua DT da cho la:\n";
    for(int v : ke[u]){
        if(!visited[v]){
            parent[v] = u;
            cout << u << "->"<< v << endl;
            dfs(v);
        }
    }
}

int main(){
    inp();
    dfs(1);
}