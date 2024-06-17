#include <bits/stdc+.h>

using namespace std;

int main(){
	//map<datatype1,datatype2> mp;
	//(key,value)
	//map luu cac pair
	map<int,int> mp;
	mp[100]=200; //(100,200)
	mp[200]=300;//(200,300);
	mp.insert({300,400}); // (300,400);
	cout << mp.size() <<endl;
	mp[100]=300; //(100,300)
	cout<< mp.size() << endl;// thay doi gia tri key , ko thay doi nhu set 
	// duyet qua map
	for(pair<int,int> x : mp){
		cout << x.first << " " << x.second << endl;
	}
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}
	for(map<int,int>::interator it=mp.begin();it != mp.end();it++){
		cout<<(*it).first <<" "<<(*it).second << endl;
	}
	// tim kiem dung count hoac find
	if(mp.cout(100)!=0){
		cout <<"Found" <<endl;
	}
	if(mp.find(100)!=mp.end()){
		cout <<"Found" <<endl;
	}
	// erase : xoa ca cap
	mp.erase(100);
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}
	// khi truy cap map chua ton tai thi luon bang 0
	// map cung sap sep tang dan theo key
	// multimap va unordered_map tuong tu nhu set
	multimap<int,int> mp;
	// dung multimap ko dung duoc phep gan
	mp.insert({1,100});
	mp.insert({2,200});
	mp.insert({1,200});
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}
}
