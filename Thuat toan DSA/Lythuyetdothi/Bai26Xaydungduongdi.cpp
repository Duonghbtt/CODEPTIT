#include <bits/stdc++.h>
using namespace std;

int n , m ;
vector <int> adj[1005];
bool used[1005];

void dfs(int u){
    used[u] = true;
    for(int v : adj[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector <int> v;
    for(int i = 1 ; i <= n ; i++){
        if(!used[i]){
            v.push_back(i);
            cnt++;
            dfs(i);
        }
    }
    cout << cnt - 1  << endl;
    for(int i = 1 ; i < v.size() ; i ++){
        cout << v[i-1] <<" "<<v[i] << endl;
    }
}