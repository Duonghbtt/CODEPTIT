#include <bits/stdc++.h>
using namespace std;

string s;
set<string> res;
string tmp;

void Try(int idx){
    for(char x : {tolower(s[idx]),toupper(s[idx])}){
        tmp += x;
        if(tmp.size()==s.size()){
            res.insert(tmp);
        }
        else{
            Try(idx+1);
        }
        tmp.pop_back();
    }
}
int main(){
    cin>>s;
    Try(0);
    for(string x : res){
        cout << x << endl;
    }
}