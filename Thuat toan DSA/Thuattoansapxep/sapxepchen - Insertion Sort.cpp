#include<bits/stdc++.h>
using namespace std;

void sx(int a[] , int n){
	int i , j , last;
	for(int i = 1 ; i < n;i++){
		last = a[i];
		j=i;
		while((j>0)&&(a[j-1]>last)){
			a[j] = a[j-1];
			j=j-1;
		}
		a[j]=last;
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