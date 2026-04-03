#include "NgayThangNam.h"

bool NgayThangNam::kiemtra(string s){
    int i = 0;

    if(s[0] == '-'){ // cho phép số âm
        if(s.length() == 1) return false;
        i = 1;
    }

    for(; s[i] != '\0'; i++){
        if(s[i] < '0' || s[i] > '9') return false;
    }
    return true;
}

bool NgayThangNam::namnhuan(int y){
    // điều kiện năm nhuận chuẩn
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int NgayThangNam::songay(int m, int y){
    // tháng 2 phụ thuộc năm nhuận
    if(m == 2) return namnhuan(y) ? 29 : 28;

    // trick: tháng <=7 thì lẻ 31, chẵn 30; >7 thì ngược lại
    if(m <= 7) return (m % 2 == 1) ? 31 : 30;
    return (m % 2 == 0) ? 31 : 30;
}

void NgayThangNam::Nhap(){
    string d,m,y;

    while(1){
        cout << "Nhap ngay thang nam: ";
        cin >> d >> m >> y;

        if(!kiemtra(d) || !kiemtra(m) || !kiemtra(y)){
            cout << "yeu cau nhap lai\n";
            continue;
        }

        iNgay = stoi(d);
        iThang = stoi(m);
        iNam = stoi(y);

        if(iThang < 1 || iThang > 12){
            cout << "yeu cau nhap lai\n";
            continue;
        }

        int maxday = songay(iThang, iNam);

        if(iNgay < 1 || iNgay > maxday){
            cout << "yeu cau nhap lai\n";
            continue;
        }

        break;
    }
}
void NgayThangNam::Xuat(){
    cout << iNgay << " " << iThang << " " << iNam << endl;
}

void NgayThangNam::NgayThangNamTiepTheo(){
    int maxday = songay(iThang, iNam);

    iNgay++;

    if(iNgay > maxday){
        iNgay = 1;
        iThang++;

        if(iThang > 12){
            iThang = 1;
            iNam++;
        }
    }
}
