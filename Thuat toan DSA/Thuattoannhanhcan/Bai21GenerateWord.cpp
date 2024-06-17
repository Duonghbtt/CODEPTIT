#include <bits/stdc++.h>
using namespace std;

int n , m;
char a[100][100];
string s , tmp="";
bool visited[100][100];
int ok =0 ;
int dx[4]= {-1 , 0 , 0 , 1};
int dy[4]= {0 , -1 , 1 , 0};


void nhap(){
    memset(visited,false,sizeof(visited));
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ;  j<=m ;j++){
            cin >> a[i][j];
        }
    }
    cin >> s;
}


void Try(int i , int j){
    if(ok) return;
    if(tmp==s){
        ok = 1;
        return;
    }
    for(int k = 0 ; k < 4 ; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if( i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n  && !visited[i1][j1]){
            tmp += a[i1][j1];
            visited[i1][j1]=true;
            if(tmp == s){
                ok =1 ;
            }
            else if( s.find(tmp) != string :: npos){ // tim vi tri tmp trong s
                Try(i1,j1);
            }
            tmp.pop_back();
            visited[i1][j1]=false;
        }
    }
}

int main(){
    nhap();
    for(int i = 1; i<=n ;i++){
        for(int j = 1 ;  j<= m ;j++){
            if(a[i][j]==s[0]){
                memset(visited,false,sizeof(visited));
                tmp = "";
                tmp += a[i][j];
                visited[i][j]=true;
                Try(i,j);
                if(ok){
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
}