#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        ll prime[n+1]={0};
        prime[0]=1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= min(i,k) ; j++){
                prime[i]+=prime[i-j];
                prime[i]%=mod;
        }
    }
        cout << prime[n] << endl;
    }
}