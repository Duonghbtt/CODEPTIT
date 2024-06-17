#include <bits/stdc+.h>
#include <set>

using namespace std;
//O(logn)
int main(){
	set<int> s; // khai bao
	s.insert(100);
	s.insert(200);
	s.insert(100);
	cout << s.size() <<endl;
	// set chi chua nhung phan tu khac nhau , ko chua phan tu trung nhau 
	// set luon xep cac phan tu theo thu tu tu nho toi lon
	// Dung find , count de tim kiem
	set<int> s;
	for(int i = 0 ; i<10 ;i++){
		s.insert(i);
	}
	if(s.count(5)!=0){
		cout << "Found";
	}
	if(s.find(5)!=s.end){
		cout << "Found" << endl;
	}
	// ham Erase : xoa phan tu 
	s.erase(5);
	cout << s.size() << endl;
	// duyet phan tu 
	for (int x:s){
		cout << x << " ";
	}
	cout << endl;
	s.erase(s.find(5)); // dung interator se ko xoa het tat ca phan tu trong multiset
	cout <<*s.begin()<< endl; // ptu dau
	cout <<*s.rbegin()<< endl;// ptu cuoi
	for (auto x : s ){ // auto dung thoai mai
		cout<<x<<endl;
	}
	for(set<int>::iterator it= s.begin();it!=s.end();++it){
		cout << *it << endl;
	}
	// muon luu cac tap hop luu Cac phan tu giong nhau thi dung multiset<int> ms;
	multiset<int> ms;
	ms.insert(100);
	ms.insert(200);
	ms.insert(100);
	cout << ms.size() <<endl;
	// van luu theo thu tu tu nho toi lon 
	ms.erase(100); // xoa het cac phan tu 100 trong tap hop
	for(int x:ms){
		cout << x << endl;
	}
	// unordered_set : luu cac phan tu rieng biet nhung ko xep theo thu tu nua
	unordered_set<int> s;
	for(int i;i<10;i++){
		s.insert(i);
	}
	for(int x:s){
		cout << x << endl;
	}
	return 0;
}
