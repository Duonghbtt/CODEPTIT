#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    priority_queue<long long , vector<long long> , greater<long long>> pq;
    for(int &x : a){
        cin >> x;
        pq.push(x);
    }
    long long res = 0;
    while(pq.size()>=2){
        long long t1 = pq.top() ; pq.pop();
        long long t2 = pq.top(); pq.pop();
        res += (t1+t2);
        pq.push(t1+t2);
    }
    cout << res << endl;
}