#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int min_val=a[0];
		int res = INT_MIN;
		for(int i=1;i<n;i++){
			if(a[i]>min_val){
				res=max(res,a[i]-min_val);
			}
			min_val=min(a[i],min_val);
		}
		if(res==INT_MIN) cout <<"-1" << endl;
		else cout << res << endl;
	}
}
