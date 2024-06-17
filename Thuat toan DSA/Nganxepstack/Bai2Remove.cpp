#include <bits/stdc++.h>
using namespace std;

string xuly(string s){
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++){
        if(!st.empty() && s[i] == st.top()){
            st.pop();
        }
        else st.push(s[i]);
    }
    string res="";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin() , res.end());
    return res;
}

int main(){
    string s;
    cin >> s;
    if(xuly(s)=="") cout <<"EMPTY" << endl;
    else cout << xuly(s) << endl;
}