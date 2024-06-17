#include<bits/stdc++.h>

using namespace std;

class honso{
	private:
		int nguyen , tu , mau;
	public:
		honso();
		honso(int,int,int);
		void nhapbp();
		void xemmh();
		void rutgon();
		friend honso operator + (honso a, honso b);
		friend honso operator - (honso a, honso b);
//		friend honso operator / (honso a, int b);
//		friend honso operator * (honso a, int b);
		honso operator * (int b);
		honso operator / (int b);
		operator honso(){
			honso c;
			
		}
};
honso::honso(){
	nguyen=tu=0;
	mau=1;
}
honso::honso(int a , int b , int c){
	nguyen = a;
	tu = b;
	mau = c;
}
void honso::nhapbp(){
	cin >> nguyen >> tu >> mau;
}
void honso::xemmh(){
	cout << nguyen ;
	if(tu!=0&&mau!=1){
	cout <<" "<< tu << "/" << mau;
	}
	cout << endl;
}
void honso::rutgon(){
	if(tu<0&&mau<0){
		tu=abs(tu);
		mau=abs(mau);
	}
	if(tu<mau){
		int k = __gcd(tu,mau);
		if(tu<0&&mau>0){
			k = __gcd(abs(tu),mau);
		}
	tu/=k;
	mau/=k;
	}
	if(tu%mau!=0){
		int k = tu/mau;
		nguyen+=k;
		tu=tu-k*mau;
	}
	else{
		int k = tu/mau;
		nguyen+=k;
		tu=0;
		mau=1;
	}
}
honso operator + (honso a, honso b){
	honso c;
	c.nguyen=a.nguyen+b.nguyen;
	c.tu=a.tu*b.mau+b.tu*a.mau;
	c.mau=a.mau*b.mau;
	c.rutgon();
	return c;
}
honso operator - (honso a, honso b){
	honso c;
//	int m = a.nguyen*a.mau+a.tu;
//	int n = b.nguyen*b.mau+b.tu;
//	if(m<n){
//		swap(a.nguyen,b.nguyen);
//		swap(a.tu,b.tu);
//		swap(a.mau,b.mau);
//	}
	int m = a.nguyen*a.mau+a.tu;
	int n =b.nguyen*b.mau+b.tu;
	c.tu = m*b.mau-n*a.mau;
	c.mau = b.mau*a.mau;
	c.nguyen = 0 ;
	c.rutgon();
	return c;
}
honso honso::operator * (int b){
	honso c;
	c.nguyen=nguyen*b;
	c.tu=tu*b;
	c.mau=mau;
	c.rutgon();
	return c;
}
//honso operator * (honso a, int b){
//	honso c;
//	c.nguyen=a.nguyen*b;
//	c.tu=a.tu*b;
//	c.mau=a.mau;
//	c.rutgon();
//	return c;
//}

honso honso::operator / (int b){
	honso c;
	c.tu=nguyen*mau+tu;
	c.nguyen=0;
	c.mau=mau*b;
	c.rutgon();
	return c;
}

//honso operator / (honso a, int b){
//	honso c;
//	c.tu = a.nguyen*a.mau+a.tu;
//	c.nguyen = 0;
//	c.mau = a.mau*b;
//	c.rutgon();
//	return c;
//}


int main(){
	honso a,b(2,3,5),c;
	a.nhapbp();
	a.rutgon();
	a.xemmh();
	b.xemmh();
	c=a+b;
	c.xemmh();
	c=a-b;
	c.xemmh();
	c=a*3;
	c.xemmh();
	c=a/3;
	c.xemmh();
	return 0;
}
