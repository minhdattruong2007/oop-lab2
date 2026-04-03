#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

#include <bits/stdc++.h>
using namespace std;

class NgayThangNam {
private:
    int iNgay, iThang, iNam;

    bool kiemtra(string s);   // kiểm tra chuỗi có phải số
    bool namnhuan(int y);     // kiểm tra năm nhuận
    int songay(int m, int y); // số ngày trong tháng

public:
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();
};

#endif
