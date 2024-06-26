#include <bits/stdc++.h>
using  namespace std;

int floor(int a[] , int n , int x){
    int l = 0  , r = n - 1 , res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] < x){
            res = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return res;
}

int main(){
    int n , x;
    cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    cout << a[floor(a,n,x)];
}