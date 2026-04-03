#include "GioPhutGiay.h"

bool GioPhutGiay::kiemtra(string s){
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

void GioPhutGiay::Nhap(){
    string h, m, s;

    while(1){
        cout << "Nhap gio phut giay (hh mm ss): ";
        cin >> h >> m >> s;

        if(!kiemtra(h) || !kiemtra(m) || !kiemtra(s)){
            cout << "yeu cau nhap lai\n";
            continue;
        }

        iGio = stoi(h);
        iPhut = stoi(m);
        iGiay = stoi(s);

        // kiểm tra hợp lệ
        if(iGio < 0 || iGio > 23 ||
           iPhut < 0 || iPhut > 59 ||
           iGiay < 0 || iGiay > 59){
            cout << "yeu cau nhap lai\n";
            continue;
        }

        break;
    }
}

void GioPhutGiay::Xuat(){
    cout << iGio << " " << iPhut << " " << iGiay << endl;
}

void GioPhutGiay::TinhCongThemMotGiay(){
    iGiay++;

    if(iGiay == 60){
        iGiay = 0;
        iPhut++;

        if(iPhut == 60){
            iPhut = 0;
            iGio++;

            if(iGio == 24){
                iGio = 0; // quay về 00:00:00
            }
        }
    }
}

