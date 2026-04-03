#include "PhanSo.h"

int main(){
    PhanSo a, b;

    cout << "Phan so thu 1:\n";
    a.Nhap();

    cout << "Phan so thu 2:\n";
    b.Nhap();

    PhanSo tong = a.Tong(b);
    PhanSo hieu = a.Hieu(b);
    PhanSo tich = a.Tich(b);
    PhanSo thuong = a.Thuong(b);

    cout << "Tong: "; tong.Xuat();
    cout << "Hieu: "; hieu.Xuat();
    cout << "Tich: "; tich.Xuat();
    cout << "Thuong: "; thuong.Xuat();

    int ss = a.SoSanh(b);
    if(ss == 1) cout << "Phan so 1 > Phan so 2\n";
    else if(ss == -1) cout << "Phan so 1 < Phan so 2\n";
    else cout << "Hai phan so bang nhau\n";

    return 0;
}
