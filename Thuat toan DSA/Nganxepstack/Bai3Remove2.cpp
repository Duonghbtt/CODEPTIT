#include <bits/stdc++.h>
using namespace std;

string xuly(string s , int k){
    stack<pair<char,int>> st;
    for(int i = 0 ; i< s.size() ; i++){
        if(!st.empty()&&s[i]==st.top().first&&st.top().second == k-1){
            st.pop();
        }
        else{
            if(st.empty()||s[i]!=st.top().first) st.push({s[i],1});
            else st.top().second++;
        }
    }
    string res ="";
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        for(int i = 0 ; i< it.second ; i++){
            res+=it.first;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    string s;
    int k;
    cin >> s >> k;
    cout << xuly(s,k) << endl;
}