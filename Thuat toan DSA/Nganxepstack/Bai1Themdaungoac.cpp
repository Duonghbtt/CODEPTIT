#include <bits/stdc++.h>
using namespace std;

int xuly(string s){
    stack<int> st;
    int cnt = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]==')'){
            if(!st.empty()) st.pop();
            else cnt++;
        }
        else{
            st.push(i);
        }
    }
    cnt += st.size();
    return cnt;
}

int main(){
    string s;
    cin >> s;
    int cnt = xuly(s);
    cout << cnt << endl;
}