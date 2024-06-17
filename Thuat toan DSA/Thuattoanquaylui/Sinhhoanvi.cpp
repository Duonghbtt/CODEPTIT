#include <bits/stdc++.h>
using namespace std;

int X[100],n ,k;
bool daxet[100];

void in(){
    for(int i = 1 ; i <= k;i++){
        cout << X[i];
    }
}
void Try(int i){
    for(int j = 1 ; j <=n; j++){
        if(daxet[j]==0){
            X[i]=j;
            daxet[j]=1;
            if(i==n){
                in();
                cout << endl;
            }
            else Try(i+1);
            daxet[j]=0;
        }
    }
}

int main(){
    memset(daxet,false,sizeof(daxet));
    cin >> n ;
    Try(1);
}