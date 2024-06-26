#include <bits/stdc++.h>
#include<stack>
using namespace std;

int n; // so dinh cua do thi
 // Nguyễn Thế Dương - B22DCKH023
 int matrix[1001][1001];
 bool visited[1001];

 void Init(){
    cin >> n ;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> matrix[i][j];
        }
        visited[i]=false;
    }
 }

 void DFS(int u){
    stack<int> st;
    st.push(u);
    visited[u]=true;
    cout << u <<" ";
    while(!st.empty()){
        int v = st.top();
        st.pop();
        for(int t =1;t<=n;t++){
            if(visited[t] == false && matrix[v][t]==1){
                cout << t << " ";
                visited[t]=true;
                st.push(v);
                st.push(t);
                break;
            }
        }
    }
 }

int main(){
    Init();
    int s ;
    cin >> s;
    DFS(s);
}