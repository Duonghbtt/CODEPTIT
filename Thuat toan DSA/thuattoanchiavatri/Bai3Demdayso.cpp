#include <bits/stdc++.h>
using namespace  std;

int mod = 1e9 + 7;

long long powMod(int a , int n){
    if(n==0) return 1;
    long long x = powMod(a,n/2);
    if(n%2 == 0) return x*x % mod;
    return ((a%mod)*(x*x%mod)) %mod;
}

int main(){
    int n;
    cin >> n;
    cout << powMod(2,n-1) << endl;
}