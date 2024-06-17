#include <bits/stdc++.h>
using namespace std;

int n , S , t [1000001] ,minn ;
bool ok=0;

void Init(){
    cin >> n >> S;
    for(int i = 0 ; i < n ;i++){
        cin >> t[i];
    }
    sort(t, t+n, greater<int>());
}

void Branch_and_Bound(int i , int sum , int cnt){
    if(sum==0){
        minn = cnt;
        ok = 1; 
        return;
    }
    if(sum >= t[i]){
        Branch_and_Bound(i+1 , sum - t[i] , cnt +1 );
    }

}
int main(){
    Init();
    Branch_and_Bound(0,S,0);
    if(!ok) cout << "-1" << endl;
    else{
        cout << minn << endl;
    }
}