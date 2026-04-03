#include "PhanSo.h"

// tìm UCLN
int PhanSo::gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return abs(a);
}

// kiểm tra chuỗi có phải số không
bool PhanSo::kiemtra(string s){
    int i = 0;
    if(s[0] == '-'){
        if(s.length() == 1) return false;
        i = 1;
    }
    for(; s[i] != '\0'; i++){
        if(s[i] < '0' || s[i] > '9') return false;
    }
    return true;
}

// rút gọn và chuẩn hóa mẫu dương
void PhanSo::RutGon(){
    int g = gcd(iTu, iMau);
    iTu /= g;
    iMau /= g;
    if(iMau < 0){
        iTu = -iTu;
        iMau = -iMau;
    }
}

// nhập phân số, kiểm tra hợp lệ
void PhanSo::Nhap(){
    string a, b;
    while(1){
        cout << "Nhap tu so va mau so: ";
        cin >> a >> b;

        if(!kiemtra(a) || !kiemtra(b)){
            cout << "Yeu cau nhap lai\n";
            continue;
        }

        iTu = stoi(a);
        iMau = stoi(b);

        if(iMau == 0){
            cout << "Yeu cau nhap lai\n";
            continue;
        }

        RutGon();
        break;
    }
}

// xuất phân số
void PhanSo::Xuat(){
    cout << iTu << "/" << iMau << endl;
}

// a/b + c/d
PhanSo PhanSo::Tong(PhanSo b){
    PhanSo kq;
    kq.iTu = iTu*b.iMau + iMau*b.iTu;
    kq.iMau = iMau*b.iMau;
    kq.RutGon();
    return kq;
}

// a/b - c/d
PhanSo PhanSo::Hieu(PhanSo b){
    PhanSo kq;
    kq.iTu = iTu*b.iMau - iMau*b.iTu;
    kq.iMau = iMau*b.iMau;
    kq.RutGon();
    return kq;
}

// a/b * c/d
PhanSo PhanSo::Tich(PhanSo b){
    PhanSo kq;
    kq.iTu = iTu*b.iTu;
    kq.iMau = iMau*b.iMau;
    kq.RutGon();
    return kq;
}

// a/b : c/d
PhanSo PhanSo::Thuong(PhanSo b){
    PhanSo kq;
    kq.iTu = iTu*b.iMau;
    kq.iMau = iMau*b.iTu;
    kq.RutGon();
    return kq;
}

// so sánh: 1 >, -1 <, 0 =
int PhanSo::SoSanh(PhanSo b){
    int left = iTu * b.iMau;
    int right = b.iTu * iMau;

    if(left > right) return 1;
    if(left < right) return -1;
    return 0;
}

