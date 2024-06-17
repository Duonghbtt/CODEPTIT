#include <bits/stdc++.h>
using namespace std;

// v[i] : Phan tu cuoi cung nho nhat 
// co the cua day con tang dan co do dai 
// la i +1 .

// a[i] lon hon tat ca cac phan tu trong v
// -> bo sung a[i] vao cuoi vector

// Tim phan tu nho nhat >= a[i] va thay no bang a[i]


int main(){
    int n ;
    cin >> n;
    int a[n+1];
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    vector <int> v;
    for(int i = 1 ;  i<= n ; i++){
        auto it = lower_bound(v.begin(),v.end(),a[i]);
        if(it==v.end()){
            v.push_back(a[i]);
        }
        else{
            *it = a[i];
        }
    }
    cout << v.size() << endl;
}