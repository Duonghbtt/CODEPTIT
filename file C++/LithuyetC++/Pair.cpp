#include<bits/stdc+.h>

using namespace std;

int main(){
	// pair : dung de luu cac cap so vs so , chuoi vs so ,..
	// pair<datatype1,datatype2> v;
	pair <int,int> v;
	pair <long long , long long > v;
	pair <string , int > v;
	// truy cap qua v.first va v.second
	// khoi tao gia tri dung make_pair
	pair<int,int> v = make_pair(100,200);
	// C++11  ko can su dung make_pair
	pair<int,int> v = {100,200};
	// tuple de dung luu 3 so , 4 so;
	tuple<int,int,int> t(1,2,3);
	// truy cap qua chi so
	cout << get<0>(t) << endl;
	// hoac dung make_tuple
	tuple<string,int,int> t = make_tuple("java",100,2);
}
