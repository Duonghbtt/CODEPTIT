 #include <bits/stdc++.h>
 using namespace std;
 
int tinh(int n , int k){
    long long x = pow(2,n-1);
    if(k==x) return n;
    if(k>x) tinh(n-1 , k-x);
    tinh (n-1,k);
}

 int main(){
    int n;
    long long k;
    cin >> n >> k;
    cout << tinh(n,k);
 }