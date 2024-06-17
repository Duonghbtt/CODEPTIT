#include<bits/stdc++.h>
using namespace std;

void sx(int a[] , int n){
	int i , j;
	for(int i = n-1 ; i >=0;i--){
		for(j=1;j<=i;j++){
			if(a[j-1]>a[j])
			swap(a[j-1],a[j]);
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	sx(a,n);
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;
}