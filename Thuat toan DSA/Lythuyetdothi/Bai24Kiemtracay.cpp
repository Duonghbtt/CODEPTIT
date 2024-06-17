#include <bits/stdc++.h>
using namespace std;

int n , m ;
vector <int> adj[1005];
bool used[1005];

void dfs(int u){
    cnt ++;
    used[u]=true;
    for(int v : adj[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}

int check(){
    dfs(1);
    if(cnt == n ) return 1;
    return 0;
}

int main(){
     cin >> n >> m;
     for(int i = 0 ; i < m ; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
     }
     if(m==n-1 && check ()) cout << 1;
     else cout << "0";
}