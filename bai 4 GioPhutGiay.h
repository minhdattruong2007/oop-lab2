 #ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H

#include <bits/stdc++.h>
using namespace std;

class GioPhutGiay {
private:
    int iGio, iPhut, iGiay;

    bool kiemtra(string s); // kiểm tra chuỗi là số

public:
    void Nhap();
    void Xuat();
    void TinhCongThemMotGiay();
};

#endif
 

