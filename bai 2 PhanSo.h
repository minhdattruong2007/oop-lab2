#ifndef PHANSO_H
#define PHANSO_H

#include <bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    int iTu, iMau; // tử số và mẫu số

    int gcd(int a, int b); // tìm UCLN
    bool kiemtra(string s); // kiểm tra nhập có phải số không

public:
    void Nhap();
    void Xuat();
    void RutGon();

    PhanSo Tong(PhanSo b);
    PhanSo Hieu(PhanSo b);
    PhanSo Tich(PhanSo b);
    PhanSo Thuong(PhanSo b);

    int SoSanh(PhanSo b); // 1: >, -1: <, 0: =
};

#endif
