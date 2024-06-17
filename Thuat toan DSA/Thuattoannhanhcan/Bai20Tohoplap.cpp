#include <bits/stdc++.h>
using namespace std;

int n , k;
string s;

void nhap(){
    cin >> n >> k;
    cin >> s;
    sort(s.begin(),s.end());
}
string tmp="";
vector<string> res;

void Try(int idx){
    for(int j = idx ; j < n ; j++){
        tmp += s[j];
        if(tmp.size()==k){
            cout << tmp << endl;
        }
        else{
            Try(j);
        }
        tmp.pop_back();
    }
}
int main(){
    nhap();
    Try(0);
}