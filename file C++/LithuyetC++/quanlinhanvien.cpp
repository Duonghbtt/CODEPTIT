#include <bits/stdc++.h>

using namespace std;

struct LuongNhanVien {
    string maNV;
    string hoTen;
    string luong;
};

int main() {
    vector<LuongNhanVien> luongNhanVien;
	int idx=0;
    while (true) {
        // Hi?n th? menu l?a ch?n
        cout << "Chon chuc nang:" << endl;
        cout << "1. Them luong nhan vien moi" << endl;
        cout << "2. Tim kiem luong nhan vien theo ho ten" << endl;
        cout << "3. Xoa luong nhan vien o vi tri cuoi va xem bang luong" << endl;
        cout << "4. Thoat" << endl;

        int chon;
        cin >> chon;

        if (chon == 1) {
        	int n;
        	cin >> n;
        	while(n--){
        		++idx;
            // Thêm luong nhân viên m?i
            LuongNhanVien nv;
            cout << "Nhap ma nhan vien: ";
            cin >> nv.maNV;
            cout << "Nhap ho ten: ";
            cin.ignore();
            getline(cin, nv.hoTen);
            cout << "Nhap luong: ";
            cin >> nv.luong;
            luongNhanVien.push_back(nv);
            cout << "Luong nhan vien da duoc them vao bang luong." << endl;
        }
        	cout << "SO nhan vien duoc nhap la: ";
        	cout << idx << endl;
        }
		else if (chon == 2) {
            // Tìm ki?m luong nhân viên theo h? tên
            string hoTenTimKiem;
            cout << "Nhap ho ten can tim kiem: ";
            cin.ignore();
            getline(cin, hoTenTimKiem);
            bool timThay = false;
            for (const LuongNhanVien& nv : luongNhanVien) {
                if (nv.hoTen == hoTenTimKiem) {
                    cout << "Thong tin luong nhan vien:" << endl;
                    cout << "Ma nhan vien: " << nv.maNV << endl;
                    cout << "Ho ten: " << nv.hoTen << endl;
                    cout << "Luong: " << nv.luong << endl;
                    timThay = true;
                    break;
                }
            }
            if (!timThay) {
                cout << "Khong tim thay luong nhan vien co ho ten: " << hoTenTimKiem << endl;
            }
        } 
		else if (chon == 3) {
            // Xóa luong nhân viên ? v? trí cu?i và xem b?ng luong
            if (!luongNhanVien.empty()) {
                luongNhanVien.pop_back();
                cout << "Luong nhan vien o vi tri cuoi da bi xoa." <<endl;
                cout << "Bang luong cuoi cung:" << endl;
    for (const LuongNhanVien& nv : luongNhanVien) {
        cout << "Ma nhan vien: " << nv.maNV << endl;
        cout << "Ho ten: " << nv.hoTen << endl;
        cout << "Luong: " << nv.luong << endl;
            } 
        }
			else {
                cout << "Bang luong rong." << endl;
            }
        } 
		else if (chon == 4) {
            // Thoát kh?i chuong trình
            break;
        } else {
            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
        }
    }

    // In b?ng luong cu?i cùng
    	cout << "Bang luong cuoi cung:" << endl;
    for (const LuongNhanVien& nv : luongNhanVien) {
        cout << "Ma nhan vien: " << nv.maNV << endl;
        cout << "Ho ten: " << nv.hoTen << endl;
        cout << "Luong: " << nv.luong << endl;
    }

    return 0;
}
