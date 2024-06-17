#include <bits/stdc++.h>
using namespace std;
// Tim day con dai nhat roi lay n - day co dai nhat
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n ;
		long long a[1005] , f[1005];
		for(int i = 0 ; i < n ;i++){
			cin >> a[i];
			f[i]=1;
		}
		for(int i = 1 ; i<n ; i++){
			for(int j = 0 ; j < i ; j++){
				if(a[j] <= a[i]){
					f[i]=max(f[i], f[j]+1);
				}
			}
		}
		cout << n-*max_element ( f, f+n) << endl;
	}
}