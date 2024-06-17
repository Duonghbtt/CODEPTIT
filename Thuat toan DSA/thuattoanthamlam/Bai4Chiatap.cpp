#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    k = min(k , n-k);
    long long s1 =0 ,  s2 =0 ;
    sort(a,a+n);
    for(int i = 0 ; i< n ; i++){
        if(i<k) s1+=a[i];
        else s2 += a[i];
    }
    cout << s2-s1;
}