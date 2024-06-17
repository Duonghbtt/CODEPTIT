#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    while(b){
        long long t = a%b;
        a=b;
        b=t;
    }
    return a;
}

long long lcm(long long a, long long b){
    return a / gcd(a,b) * b;
}

struct Phanso{
    long long tu , mau;

    void rutgon(){
        long long uc = gcd(this->tu , this->mau);
        this->tu /= uc;
        this->mau /=uc;
    }

    Phanso operator - (Phanso b){
        long long mauchung = this->mau * b.mau;
        long long t1 = this->tu *b.mau - b.tu *this->mau;
        Phanso res{t1,mauchung};
        res.rutgon();
        return res;
    }
};
int main(){
    Phanso a;
    cin >> a.tu >> a.mau;
    while(a.tu){
        long long x;
        if(a.mau % a.tu == 0){
            x = a.mau / a.tu;
        }
        else x = a.mau / a.tu + 1;
        Phanso donvi{1,x};
        cout << 1 <<"/" <<x;
        a = a - donvi;
        if(a.tu) cout << " + ";
    }

}