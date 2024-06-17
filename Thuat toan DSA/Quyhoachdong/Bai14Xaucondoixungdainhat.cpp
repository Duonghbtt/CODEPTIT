#include <bits/stdc++.h>
using namespace std;
// f[i][j] = s[i]==s[j] && f[i+1][j-1];
int main(){
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s ; 
    s="@"+s;
    int n = s.size();
    bool F[n+1][n+1];
    memset(F,false,sizeof(F));
    // len = 1
    for(int i = 1 ; i <= n ; i++){
        F[i][i]= true;
    }
    int ans = 1;
    for(int len = 2 ; len <= n ; len++){
        for(int i = 1 ; i <= n - len + 1 ; i++){
            int j = i+len-1;
            if(len==2){
                if(s[i]==s[j]){
                    F[i][j]=true;
                }
                else F[i][j]=false;
            }
            else{
                if(F[i+1][j-1]==true){
                    if(s[i]==s[j]){
                        F[i][j]=true;
                    }
                }
                else F[i][j]=false;
            }
            if(F[i][j]){
                ans = max(ans,len);
            }
        }
    }
    cout << ans << endl;
}
}