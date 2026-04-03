#include "SoPhuc.h"

void SoPhuc::Nhap(){
    cin >> iThuc >> iAo;
}

void SoPhuc::Xuat(){
    cout << iThuc;
    if(iAo >= 0) cout << " + " << iAo << "i";
    else cout << " - " << -iAo << "i";
    cout << endl;
}

// (a+bi) + (c+di) = (a+c) + (b+d)i
SoPhuc SoPhuc::Tong(SoPhuc b){
    SoPhuc kq;
    kq.iThuc = iThuc + b.iThuc;
    kq.iAo = iAo + b.iAo;
    return kq;
}

// (a+bi) - (c+di)
SoPhuc SoPhuc::Hieu(SoPhuc b){
    SoPhuc kq;
    kq.iThuc = iThuc - b.iThuc;
    kq.iAo = iAo - b.iAo;
    return kq;
}

// (a+bi)(c+di) = (ac - bd) + (ad + bc)i
SoPhuc SoPhuc::Tich(SoPhuc b){
    SoPhuc kq;
    kq.iThuc = iThuc*b.iThuc - iAo*b.iAo;
    kq.iAo = iThuc*b.iAo + iAo*b.iThuc;
    return kq;
}

// chia số phức
SoPhuc SoPhuc::Thuong(SoPhuc b){
    SoPhuc kq;
    double mau = b.iThuc*b.iThuc + b.iAo*b.iAo; // mẫu số

    kq.iThuc = (iThuc*b.iThuc + iAo*b.iAo) / mau;
    kq.iAo = (iAo*b.iThuc - iThuc*b.iAo) / mau;

    return kq;
}
