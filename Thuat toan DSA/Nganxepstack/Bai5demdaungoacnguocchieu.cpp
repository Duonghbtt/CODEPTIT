#include <bits/stdc++.h>
using namespace std;

int xuly(string s){
    stack <int> st;
    int cnt = 0;
    for(int i = 0 ; i<s.size(); i++){
        if(s[i]=='(') st.push(i);
        else{
            if(st.empty()){
                cnt++;
                st.push(i);      
            }
            else{
                st.pop();
            }
        }
    }
    cnt += st.size() / 2;
    return cnt;
}

int main(){
    string s;
    cin >> s;
    cout << xuly(s);
}