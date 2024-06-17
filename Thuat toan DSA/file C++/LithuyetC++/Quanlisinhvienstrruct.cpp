#include<bits/stdc++.h>

using namespace std;

struct sv{
	string ma , ten , lop , ns;
	double gpa;
	
	void in(){
		cout <<"------------------------------------\n";
		cout << "Ma sinh vien :" << ma << endl;
		cout << "Ten sinh vien :" << ten << endl;
		cout << "Lop :" << lop << endl;	
		cout << "Ngay sinh: "<< ns << endl;
		cout << "GPA : "  << fixed << setprecision(2) << gpa << endl;
		cout <<"------------------------------------\n";	
	}
	
	void nhap(){
		cout << "Nhap ma sinh vien : ";
		cin >> ma;
		cin.ignore();
		cout <<"Nhap ten sinh vien : ";
		getline(cin,ten);
		cout << "Nhap lop: ";cin >> lop;
		cout << "Nhap ngay sinh"; cin >> ns;
		cout <<"Gpa : "; cin >> gpa;
	}
};

void inds(sv a[],int n){
	cout << "Thong tin danh sach sinh vien:\n";
	for(int i=0;i<n;i++){
		a[i].in();
	}
}
 // cach tim kiem chinh xac
void tkma(sv a[],int n){
	string ma;
	cout <<"Nhapp ma sv can tim: ";
	cin >> ma;
	for(int i =0;i<n;i++){
		if(ma==a[i].ma){
			a[i].in();
			return ;
		}
	}
	cout << "Khong tim thay sinh vien co ma vua nhap !\n";
}

// cach tim theo danhsach
void tkma1(sv a[],int n){
	string ma;
	cout <<"Nhapp ma sv can tim: ";
	cin >> ma;
	bool found = false;
	for(int i =0;i<n;i++){
		if(a[i].ma.find(ma) != string:: npos){
			// tim thay
			a[i].in();
			found=true;
		}
	}
	if(!found)
	cout << "Khong tim thay sinh vien co ma vua nhap !\n";
}

void  lkgpa( sv a[], int n ){
	double res=0;
	vector<int> idx;
	for(int i=0;i<n;i++){
		if(a[i].gpa > res) res=a[i].gpa;
	}
	cout <<"Danh sach sinh vien co diem gpa cao nhat:\n";
	for(int i=0;i<n;i++){
		if(res==a[i].gpa){
			a[i].in();
		}
	}
}

// co ca thu tu
void  lkgpa1( sv a[], int n ){
	double res=0;
	vector<int> idx;
	for(int i=0;i<n;i++){
		if(a[i].gpa > res) {
			res=a[i].gpa;
			idx.clear();
			idx.push_back(i);
		}
		else if(a[i].gpa==res){
			idx.push_back(i);
		}
	}
	cout <<"Danh sach sinh vien co diem gpa cao nhat:\n";
	for(int i=0;i<n;i++){
		if(res==a[i].gpa){
			a[i].in();
		}
	}
}



int main(){
	sv a[1000];
	int n=0;
	while(1){
		cout <<"---------------------MENU---------------\n";
		cout <<"1.Nhap thong tin sinh vien\n";
		cout << "2.Hien thi toan bo danh sach sinh vien\n";
		cout <<" 3. Tim kiem sinh vien theo ma sinh vien \n";
		cout << "4.Liet ke sinh vien co diem qpa cao nhat\n";
		cout << "0. Thoat!\n";
		cout <<"-----------------------------------------\n";
		cout << "Nhap lua chon :\n";
		int lc;
		cin >> lc;
		if(lc==1){
			a[n].nhap();
			++n;
		}
		else if (lc==2){
			inds(a,n);
		}
		else if (lc==3){
			tkma(a,n);
		}
		else if(lc==4){
			lkgpa(a,n);
		}
		else if(lc==0){
			break;
		}
	}
	return 0;
}
