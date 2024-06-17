#include <bits/stdc++.h>
using namespace std;

int n , m ;
vector<int> adj[1005];
int main(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int x, y ;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1 ; i <= n ; i++){
        cout << i <<" : ";
        sort(adj[i].begin() , adj[i].end());
        for(int x : adj[i]){
            cout << x << " ";
        }
    }
}