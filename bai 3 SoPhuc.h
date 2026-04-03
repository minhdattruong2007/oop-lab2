#ifndef SOPHUC_H
#define SOPHUC_H

#include <bits/stdc++.h>
using namespace std;

class SoPhuc {
private:
    double iThuc, iAo; // phần thực và phần ảo

public:
    void Nhap();
    void Xuat();

    SoPhuc Tong(SoPhuc b);
    SoPhuc Hieu(SoPhuc b);
    SoPhuc Tich(SoPhuc b);
    SoPhuc Thuong(SoPhuc b);
};

#endif
