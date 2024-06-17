#include <bits/stdc++.h>
using namespace std;

long long crossingsum(int a[] , int l , int r , int mid){
    int sumleft = 0 , maxsumleft  = 0 ;
    int sumright = 0 , maxsumright = 0;
    for(int i = mid ; i >= l ; i--){
        sumleft += a[i];
        maxsumleft = max(maxsumleft , sumleft);
    }
    for(int i = mid +1 ; i <= r ; i++){
        sumright += a[i];
        maxsumright = max(maxsumright , sumright);
    }
    return maxsumleft + maxsumright;
}

long long maxsum(int a[] , int  l , int r){
    if (l==r) return a[l];
    int mid = (l+r)/2;
    return max({
        maxsum(a,l,mid),
        maxsum(a,mid+1,r),
        crossingsum(a,l,r,mid)
    });
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << maxsum(a,0,n-1);
}