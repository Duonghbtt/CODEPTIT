#include <bits/stdc++.h>
using namespace std;

int n , a[1000001];
void Init(){
    cin >> n;
    for(int i = 0 ; i <n; i++){
        cin >> a[i];
    }
}

int maxcross(int l , int m , int h ){
    int sum = 0;
    int left_sum = INT_MIN , right_sum = INT_MIN;
    for(int i = m ; i >=l ;i--){
        sum+=a[i];
        if(sum >left_sum) left_sum = sum;
    }
        sum = 0;
    for(int i = m ;i <= h ;i++){
            sum+=a[i];
            if(sum > right_sum) right_sum = sum;
    }
    return left_sum + right_sum;
}

int maxsum(int l , int h){
    if(l==h) return a[l];
    int m = (l+h)/2;
    int maxval=max(max(maxsum(l,m),maxsum(m+1,h)),maxcross(l,m,h));
    return maxval;
}

int main(){
    Init();
    int u = maxsum(0,n-1);
    cout << u << endl;
}