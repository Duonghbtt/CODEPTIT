#include <bits/stdc++.h>
using namespace std;
int n,m;
char a[1005][1005];

int dx[]={-1 , 0 , 0 , 1};
int dy[]={0 , -1 , 1 , 0};

int bfs(int i , int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    a[i][j]='#';
    int cnt =0;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        int i = it.first;
        int j = it.second;
        cnt++;
        for(int k = 0 ;  k< 8 ; k++){
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if(i1 >=1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
                q.push({i1,j1});
                a[i1][j1]='#';
            }
        }

    }
    return cnt;
}

int main(){
    cin >> n >> m;
    for(int i = 1  ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << bfs(i,j) << endl;
        }
    }
}