#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    int mod = 1e9 + 7;
    long long res = 0;
    for(int i = 0 ; i< n ; i++){
        res += 1ll * a[i] * i ;
        res %= mod;
    }
    cout << res << endl;
}