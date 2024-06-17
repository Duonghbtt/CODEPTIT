#include <bits/stdc++.h>
using namespace std;

int xuly(string s){
    stack<int> st;
    int res =0;
    for(int i =0 ; i < s.length() ; i++){
        if(s[i]=='(') st.push(i);
        else{
            if(st.empty()) res++;
            else{
                st.pop();
            }
        }
    }
    return res;
}
int main(){
    string s;
    cin >> s;
    cout << xuly(s) << endl;
}