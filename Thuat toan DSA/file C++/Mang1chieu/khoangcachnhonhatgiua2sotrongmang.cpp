#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int a[n];
		for(int i =0 ; i < n ;i++){
			cin >> a[i];
		}
//		int res= INT_MAX; // mot so rat lon 
//		for(int i = 0 ; i<n;i++){
//			for(int j= i+1 ; j<n ;j++){
//				res=min(res,max(a[i],a[j])-min(a[i],a[j]));
//			}
//		}
		sort(a,a+n);
		int res = INT_MAX;
		for(int i=1;i<n;i++){
			res=min(res,a[i]-a[i-1]);
		}
		cout << endl;
	}
}
