#include <bits/stdc++.h>
using namespace std;

struct Tanxuat{ // định nghĩa ký tự và số lần xhien trong S
    char kytu;
    int solan;
};

int Search( Tanxuat X[] , int n , char t){ // Xac dinh vi tri cua t trong tap ki tu X[]
    for(int i = 0 ; i <= n ;i++){
        if(X[i].kytu==t){
            return i;
        }
    }
    return (n+1);
}

int Tack_kytu(char S[] , Tanxuat X[] , int n ){ // tim so ky tu va so lan xuat hien
    int k = strlen(S);
    for(int i = 0 ; i < k ;i++){
        int p = Search(X,n,S[i]);
        if(p<=n) X[p].solan++;
        else{
            n=p;
            X[p].kytu=S[i];
            X[p].solan=1;
        }
    }
    return n;
}

void Sort(Tanxuat X[] , int n){ // Sap xep giam dan
    Tanxuat t;
    for(int i = 0 ; i<n ;i++){
        for(int j = i+1 ; j <= n; j++){
            if(X[i].solan < X[j].solan){
                swap(X[i],X[j]);
            }
        }
    }
}

void thamlam(){
    char S[100];
    cout << "Nhap s";
    cin >> S;
    int d;
    cout << "Nhap d" ;
    cin >> d;
    int m = -1 , n = strlen(S) , chuaxet[100];
    Tanxuat X[255];
    char STR[100]; // xau ket qua
    for(int i = 0 ; i < n ;i++){
        chuaxet[i]=true;
    }
    m=Tack_kytu(S,X,m);
    Sort(X,m);
    for(int i = 0 ;i <= m ;i++){
        int k = X[i].solan;
        int t = 0;
        while(!chuaxet[t]) t++;
        for(int q = 0 ; q < k ; q++){
            if((t+q*d)>=n){
                cout << "Vo nghiem" << endl;
                return ;
            }
            STR[t+q*d]=X[i].kytu;
            chuaxet[t+q*d]=false;
        }
    }
    STR[n] = '\0';
    cout << STR ;

}
int main(){
    thamlam();
}