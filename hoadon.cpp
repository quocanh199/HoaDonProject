//
// Created by quocanh on 28/04/2020.
//
#include "hoadon.h"
#include <iostream>
using namespace std;

HoaDon::HoaDon(){
    SoHoaDon = 0;
    TenKhachHang = "";
    NgayRaHoaDon.setDate();
}
HoaDon::HoaDon(int SoHoaDon, string TenKhachHang, Date NgayRaHoaDon) {
    this->SoHoaDon = SoHoaDon;
    this->TenKhachHang = TenKhachHang;
    this->NgayRaHoaDon = NgayRaHoaDon;
}
HoaDon::~HoaDon() {
}
ostream& operator <<(ostream &out,HoaDon b){
    out<<"Hoa don: "<<b.SoHoaDon<<"\n"
        <<"Ten Khach Hang: "<<b.TenKhachHang<<"\n"
        <<"Ngay ra hoa don: "<<b.NgayRaHoaDon.asString()<<"\n"
        <<"Thanh tien: "<<b.ThanhTien()<<endl;
    return out;
}
istream& operator >>(istream &in,HoaDon &b){
    cout<<"Nhap so hoa don: ";
    in>>b.SoHoaDon;
    cout<<"Nhap ten khach hang: ";
    in>>b.TenKhachHang;
    cout<<"Ngay ra hoa don: ";
    b.NgayRaHoaDon.userInput();
}
