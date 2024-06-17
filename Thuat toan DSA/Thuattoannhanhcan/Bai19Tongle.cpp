#include <bits/stdc++.h>
using namespace std;

int n , a[100] ;
vector <vector<int>> res;
vector <int> tmp;
void nhap(){
    cin >> n;
    for(int i = 0  ; i < n;i++){
        cin >> a[i];
    }
}

void  Try(int idx , int sum){
    for(int j = idx ; j < n ; j++){
        sum+=a[j];
        tmp.push_back(a[j]);
        if(sum%2==1){
            res.push_back(tmp);
        }
        Try(j+1,sum);
        sum-=a[j];
        tmp.pop_back();
    }
}

int main(){
    nhap();
    Try(0,0);
    //sort(res.begin(),res.end());
    for(vector<int> tmp : res){
        for(int x : tmp){
            cout << x <<" ";
        }
        cout << endl;
    }
}






