#include<bits/stdc++.h>
using namespace std;

void sx(int a[] , int n){
	int i , j , min , temp;
	for(int i = 0;i<n-1;i++){
		min  = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]) min=j;
		}
		swap(a[i],a[min]);
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