#include <bits/stdc++.h>
using namespace std;

int a[105][105]={0};
int f[105][105]={0};

int main(){
    int n ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ;  j <= n ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<= n ; j++){
            f[i][j] = max(f[i-1][j],max(f[i-1][j-1],f[i-1][j+1])) + a[i][j];
        }
    }
    cout << *max_element(f[n]+1,f[n]+n+1) << endl;
}