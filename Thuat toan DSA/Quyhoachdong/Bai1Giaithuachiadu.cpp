#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 1;
long long F[1000001];
int main(){
    F[0]=1;
    for(int i = 1; i<=1000000 ; i++){
        F[i]=F[i-1]*i;
        F[i]%=mod;
    }
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        cout << F[n] << endl;
    }
}