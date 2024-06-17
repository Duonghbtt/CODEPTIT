#include <bits/stdc++.h>
using namespace std;

int n , k;
vector<vector<int>> res;
vector <int> tmp;
vector <int> prime;

bool nt(int a ){
    if(a==0&&a==1) return false;
    if(a==2) return true;
    for(int i = 2 ; i <= sqrt(a) ; i++){
        if(a%i==0)  return false;
    }
    return true;

}

void Try(int init , int sum){
    for(int j = init ; j <= prime.size() ; j++){
        tmp.push_back(prime[j]);
        sum+=prime[j];
        if(sum==n&&tmp.size()==k){
            res.push_back(tmp);
        }
        else if(sum < n && tmp.size()<k){
            Try(j+1,sum);
        }
        tmp.pop_back();
        sum-=prime[j];
    }
}

int main(){
    cin >>  n >> k;
    for(int i = 1 ; i<=500 ;i++){
        if(nt(i)) prime.push_back(i);
    }
    Try(0,0);
    if(res.size()==0){
        cout << "NOT FOUND" << endl;
    }
    else{
        sort(res.begin(),res.end());
        for(vector <int> tmp : res){
            for(int j = 0 ; j < tmp.size() ; j++){
                cout << tmp[j];
                if(j!= tmp.size()-1) cout <<" + ";
            }
            cout << endl;
        }
    }
}