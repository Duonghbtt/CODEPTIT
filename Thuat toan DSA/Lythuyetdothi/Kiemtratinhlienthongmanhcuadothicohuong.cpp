#include<bits/stdc++.h>
using namespace std;

int n ;
int matrix[1001][1001];
bool visited[1001];
// Nguyễn Thế Dương B22DCKH023
void Init(){
    cin >> n;
    for(int i =1 ; i<=n;i++){
        for(int j =1 ; j <=n ;j++){
            cin >> matrix[i][j];
        }
        visited[i]=false;
    }
}

int BFS(int u){
    int cnt = 0;
    queue <int> Q;
    Q.push(u);
    visited[u]=true;
    while(!Q.empty()){
        int s = Q.front();
        cnt ++;
        Q.pop();
        for(int t = 1 ; t <=  n ;t ++){
            if(visited[t]==false && matrix[s][t]==1){
                Q.push(t);
                visited[t]=true;
            }
        }
    }
    return cnt;
}

void Reinit(){
    for(int v = 1;v<=n;v++){
        visited[v]=false;
    }
}
bool isStrongConnection(){
    for(int v = 1 ; v <=n ; v++){
        if(BFS(v) != n){
           //  Reinit();
            return false;
            break;
        }
        Reinit();
    }
    return true;
}
// Nguyễn Thế Dương B22DCKH023
int main(){
    Init();
    if(isStrongConnection()==true){
        cout <<" the graph is strong connection "<< endl;
    }
    else{
        cout <<" the graph is not strong connection "<< endl;
    }
}