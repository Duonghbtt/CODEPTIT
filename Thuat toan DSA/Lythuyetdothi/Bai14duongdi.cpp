#include <bits/stdc++.h>
using namespace std;
int n , m , s , t;  
vector<int> adj[1005];
bool used[1005];
int parent[1005];
void dfs(int u ){
    used[u]=true;
    for(int v : adj[u]){
        if(!used[v]){
            parent[v]=u;
            dfs(v);
        }
    }
}

int main(){
    cin >> n >> m >> s >> t;
    for(int i = 0 ; i < m ; i++){
        int x , y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++){
        sort(adj[i].begin() , adj[i].end());
    }
    dfs(s);
    if(used[t]){
         vector<int> path;
        while(t!= s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(t);
        reverse(path.begin() , path.end());
        for(int x : path) cout << x <<" ";
    }
    else cout <<-1;
}