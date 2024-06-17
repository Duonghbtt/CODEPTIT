/*#include <bits/stdc++.h>
using namespace std;

long long power(int x , int n){
	if(n==0){
		return 1;
	}
	else if(n%2==0){
		return power(x,n/2)*power(x,n/2);
	}
	else return x*power(x,n/2)*power(x,n/2);
}

int main(){
	int x;
	cin >> x;
	int n;
	cin >> n;
	cout << 1ll*power(x,n)<<endl;
}*/
#include <bits/stdc++.h>
using namespace std;

long long power(int x , int n){
    int tmp;
    if(n==0) return 1;
    tmp = power(x,n/2);
    if(n%2==0) return tmp*tmp;
    else return x*tmp*tmp;
}

int main(){
	int x;
	cin >> x;
	int n;
	cin >> n;
	cout << 1ll*power(x,n)<<endl;
}