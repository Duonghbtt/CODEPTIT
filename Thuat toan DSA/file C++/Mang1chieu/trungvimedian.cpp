#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	if(n%2!=0){
		cout << a[n/2] << endl;
	}
	else cout << a[n/2-1] << endl;
}
