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

int DFS(int u ){
    int cnt = 0;
    stack<int> st;
    st.push(u);;
    cnt++;
    visited[u]=true;
    while(!st.empty()){
        int s = st.top();
        st.pop();
        for(int t = 1 ; t <=n ;t++){
            if(visited[t]== false && matrix[s][t]==1){
               cnt++;
               visited[t]= true;
               st.push(s);
               st.push(t);
               break; 
            }
        }
    }
    return cnt;
}

void reinit(){
    for(int i = 1 ;i <=n;i++)
    visited[i]= false;
}
void duyet_cau(){
  for(int i = 1 ;i<=n;i++){
    for(int j = 1 ;j<=n;j++){
        if(matrix[i][j]==1){
            matrix[i][j] = matrix[j][i] = 0;
            if(DFS(1)!= n)
                 cout << i <<","<<j <<" la canh cau" << endl;
            else
                 cout << i <<","<<j <<" khong la canh cau" << endl; 
            reinit();
            matrix[i][j]=matrix[j][i]=1;   
        }
    }
  }
}
// Nguyễn Thế Dương B22DCKH023
int main(){
   Init();
   duyet_cau();
}