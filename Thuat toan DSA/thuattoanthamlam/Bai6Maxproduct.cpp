#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n] , b[n];
    for( int &x : a) cin >> x;
    for(int &x : b)  cin >> x;
    sort(a,a+n);
    sort(b,b+n);
    long long sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += 1ll * a[i] * b[i];
    }
    cout << sum << endl;
}