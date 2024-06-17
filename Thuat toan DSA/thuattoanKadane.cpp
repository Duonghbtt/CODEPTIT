#include<bits/stdc++.h>
// Day con lien tieep co tong lon nhât
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	long long sum1=0,sum2=INT_MIN;
	for(int i=0;i<n;i++){
		sum1+=a[i];
		sum2=max(sum1,sum2);
		if(sum1<0) sum1=0;
	}
	cout << sum2 << endl;
}
