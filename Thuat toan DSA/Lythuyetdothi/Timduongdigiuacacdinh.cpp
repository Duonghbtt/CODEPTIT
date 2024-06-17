#include <bits/stdc++.h>
using namespace std;

int n ;
int matrix[1001][1001];
bool visited[1001];
int forward_point[1001];

void Init(){
    cin >> n;
    for(int i =1 ; i<=n;i++){
        for(int j =1 ; j <=n ;j++){
            cin >> matrix[i][j];
        }
        visited[i]=false;
        forward_point[i]=0;
    }
}

void DFS(int u){
    stack<int> st;
    st.push(u);
    visited[u]=true;
    while(!st.empty()){
        int s = st.top();
        st.pop();
        for(int t = 1 ; t <=n ; t++){
            if(visited[t]=false && matrix[s][t]==1){
                forward_point[t]=s;
                visited[t]=true;
                st.push(s);
                st.push(t);
                break;
            }
        }
    }
}

void PrintPath(int s , int e){
    if(forward_point[e]==0){
        cout << "There is no path between " << s <<" and "<< e << endl;
    }
    else{
        cout << "Path : ";
        cout << e ;
        int u = forward_point[e];
        while(u!=s){
            cout << " <- " << u;
            u = forward_point[u];
        }
        cout << " <- "<< s;
    }
}
int main(){
    int s,e;
    Init();
    cout <<"enter first point: ";
    cin >> s;
    cout <<"enter last point: ";
    cin >> e;
    DFS(s);
    PrintPath(s,e);
}
// Nguyễn Thế Dương B22DCKH023