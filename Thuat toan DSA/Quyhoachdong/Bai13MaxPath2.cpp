#include <bits/stdc++.h>
using namespace std;

int a[105][105]={0};
long long f[105][105]={0};
using ll = long long;

int main(){
    int n ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ;  j <= n ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++){
        f[0][i] = f[n+1][0] = -1e18;
    }
    for(int i = 1 ; i <= n ; i++){
        f[i][1]=a[i][1];
    }
    for(int j = 2 ; j <= n ; j++){
        for(int i = 1 ; i<= n ; i++){
            f[i][j] = max(f[i][j-1],max(f[i-1][j-1],f[i+1][j-1])) + a[i][j];
        }
    }
    ll ans = -1e18;
    for(int i = 1 ; i <= n ; i++){
        ans = max(ans , f[i][n]);
    }
    cout << ans << endl;
}