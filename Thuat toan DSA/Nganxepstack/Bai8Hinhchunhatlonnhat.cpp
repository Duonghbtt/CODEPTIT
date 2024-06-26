#include <bits/stdc++.h>
using namespace std;

void smaller_left(int a[] , int n  , int l[]){
    stack <int > st;
    for(int i = n-1; i >= 0 ; i--){
        while(!st.empty() && a[i] < a[st.top()]){
            l[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        l[st.top()] =-1;
        st.pop();
    }
}

void smaller_right(int a[] , int n  , int r[]){
    stack <int > st;
    for(int i = 0; i < n ; i--){
        while(!st.empty() && a[i] < a[st.top()]){
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        r[st.top()] =-1;
        st.pop();
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n] , l[n] , r[n];
        for(int &x : a) cin >> x;
        smaller_left(a,n,l);
        smaller_right(a,n,r);
        long long res=0;
        for(int i = 0  ;i < n ; i++){
            int w = r[i] - l[i] -1 ;
            long long dt = 1ll*a[i]*w;
            res = max (res,dt);
        }
        cout << res << endl;
    }
}