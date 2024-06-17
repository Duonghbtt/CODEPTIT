#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
struct SinhVien{
 int ma;
 string ten;
 double diem;
 	void in(){
		cout << ma << " ";
		cout << ten <<" ";
		cout << fixed << setprecision(1) << diem << endl;	
	}
	
	void nhap(){
		cin >> ma;
		cin.ignore();
		getline(cin,ten);
		cin >> diem;
	}
};
void cn_1 (vector<SinhVien> &arr, int n) {
 int k;
 cin >> k;
 for (int i = 0; i < k; i ++) {
  SinhVien sv;
  sv.nhap();
  arr.pb(sv);
 }
 cout << k << endl;
}
void cn_2 (vector<SinhVien> &arr, int n) {
 cin.ignore();
 string s;
 getline(cin, s);
 int len = arr.size(), kt = 0;
 for (int i = 0 ; i < len; i ++) {
  if (s == arr[i].ten) {
   arr[i].in();
   kt = 1;
  }
 }
 if (!kt) cout << "-1\n";
}
void cn_3(vector<SinhVien> &arr, int n) {
 arr.pop_back();
 int len = arr.size();
 for (int i = 0; i < len; i ++) {
  arr[i].in();
 }
}
int main(){
 vector<SinhVien> arr;
 for (int n; cin >> n;) {
  if (n == 1) cn_1(arr, n);
  else if (n == 2) cn_2(arr, n);
  else {
   cn_3(arr, n);
  }
 }
}
