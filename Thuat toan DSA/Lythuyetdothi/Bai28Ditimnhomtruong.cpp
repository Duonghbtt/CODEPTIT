#include <bits/stdc++.h>
using namespace std;

    int n , m ;
vector <int> adj[1005];
int bac[1005];
bool used[1005];
int nhomtruong = 1001;

void dfs(int u){
    if(bac[u] > bac[nhomtruong] || bac[u]==bac[nhomtruong] && u < nhomtruong){
        nhomtruong = u;
    }
    used[u] = true;
    for(int v : adj[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}
int main(){
    cin >> n >> m;
for(int i = 0 ; i < m ; i++){
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
    bac[x]++;
    bac[y]++;
}
vector <int> v;
for(int i = 1 ; i <= n ; i++){
    if(!used[i]){
        nhomtruong=1001;
        dfs(i);
        v.push_back(nhomtruong);
    }
}
sort(v.begin(), v,end());
for(int x : v) cout << x <<" ";
cout << endl;
}