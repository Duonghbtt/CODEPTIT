#include <bits/stdc++.h>
using namespace  std;

int mod = 1e9 + 7;

int rev(int n){
    int s = 0;
    while(n){
        s = s*10 + n%10;
        n/=10;
    }
    return s;
}

long long powMod(int a , int n){
    if(n==0) return 1;
    long long x = powMod(a,n/2);
    if(n%2 == 0) return x*x % mod;
    return ((a%mod)*(x*x%mod)) %mod;
}

int main(){
    int n;
    cin >> n;
    cout << powMod(n,rev(n)) << endl;
}