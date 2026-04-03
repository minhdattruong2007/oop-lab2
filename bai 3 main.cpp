#include "SoPhuc.h"

int main(){
    SoPhuc a, b;

    cout << "Nhap so phuc thu 1 (thuc ao): ";
    a.Nhap();

    cout << "Nhap so phuc thu 2 (thuc ao): ";
    b.Nhap();

    SoPhuc tong = a.Tong(b);
    SoPhuc hieu = a.Hieu(b);
    SoPhuc tich = a.Tich(b);
    SoPhuc thuong = a.Thuong(b);

    cout << "Tong: "; tong.Xuat();
    cout << "Hieu: "; hieu.Xuat();
    cout << "Tich: "; tich.Xuat();
    cout << "Thuong: "; thuong.Xuat();

    return 0;
}

