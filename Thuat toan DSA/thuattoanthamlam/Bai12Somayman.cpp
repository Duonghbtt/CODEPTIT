#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum;
    cin >> sum;
    int d4 = -1;
    int d7;
    for (d7 = sum/7 ; d7 >=0 ; d7--){
        if((sum-d7*7)%4 == 0){
            d4 = (sum-d7*7)/4;
            break;
        }
    }
    if(d4!=-1){
        while(d4--){
            cout << 4;
        }
        while(d7--){
            cout << 7;
        }
        cout << endl;
    }
    else cout << -1 << endl;
}