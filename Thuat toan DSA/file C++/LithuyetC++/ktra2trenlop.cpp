#include<bits/stdc++.h>

using namespace std;

class thoigian{
	private:
		int gio,phut;
	public:
		thoigian();
		thoigian(int,int);
		void nhapbp();
		void xemmh();
		void rutgon();
		static thoigian fromChar(const char* str) {
	    int h = 0, m = 0;
	    const char* p = str;
	
	    sscanf(str, "%d gio %d phut", &h, &m);
	    return thoigian(h, m);
	}
		const char* toChar() {
        static char buffer[30];
        if (phut > 0) {
            snprintf(buffer, sizeof(buffer), "%d gio %d phut", gio, phut);
        } else {
            snprintf(buffer, sizeof(buffer), "%d gio", gio);
        }
        return buffer;
    }
		friend bool operator < (thoigian a, thoigian b){
        if((a.phut + a.gio*60)< (b.phut + b.gio*60))
        return true;
        else    return false;
 	   } 
 	   
		thoigian operator + (thoigian b);
		thoigian operator - (thoigian b);
		friend thoigian operator * (thoigian a , int b);
		friend thoigian operator / (thoigian a, int b);
};
thoigian::thoigian(){
	gio=0;
	phut=0;
}
thoigian::thoigian(int a,int b){
	gio=a;
	phut=b;
}
void thoigian::nhapbp(){
	cin >> gio >> phut;
}
void thoigian::rutgon() {
        gio += phut / 60;
        phut %= 60;
    }
void thoigian::xemmh() {
        cout << gio << " gio ";
        if (phut != 0) {
            cout << phut << " phut";
        }
        cout << endl;
    } 
thoigian thoigian::operator + (thoigian b) {
        thoigian c;
        c.gio=0;
        c.phut=(gio*60+phut)+(b.gio*60+b.phut);
        c.rutgon();
        return c;
    }
thoigian thoigian::operator - (thoigian b){
		thoigian c;
		 c.gio=0;
        c.phut=(gio*60+phut)-(b.gio*60+b.phut);
        c.rutgon();
        return c;
}  
thoigian operator * (thoigian a, int b){
		thoigian c;
		c.gio=0;
		c.phut=(a.gio*60+a.phut)*b;
		c.rutgon();
		return c;
}
thoigian operator / (thoigian a , int b){
		thoigian c;
		c.gio=0;
		c.phut=(a.gio*60+a.phut)/b;
		c.rutgon();
		return c;	
}

int main() {
    thoigian a, b(3, 20), c;
    a.nhapbp();
    a.xemmh();

    c = thoigian::fromChar("2 gio 15 phut");
    c.xemmh();
    cout << "c: " << c.toChar() << endl;

    if (a < b) {
        cout << "a < b" << endl;
    } else {
        cout << "a >= b" << endl;
    }
    c = a - b;
    cout << "a - b = ";
    c.xemmh();
    
    c = a + b;
    cout << "a + b = ";
    c.xemmh();

    c = a * 2;
    cout << "a * 2 = ";
    c.xemmh();

    c = a / 2;
    cout << "a / 2 = ";
    c.xemmh();

    return 0;
}
