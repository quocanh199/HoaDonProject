//
// Created by quocanh on 28/04/2020.
//

#ifndef HOADONPROJECT_HOADON_H
#define HOADONPROJECT_HOADON_H

#include "Date.h"
#include <string>

class HoaDon{
private:
    int SoHoaDon;
    Date NgayRaHoaDon;
    string TenKhachHang;
public:
    HoaDon(int SoHoaDon, string TenKhachHang,Date NgayRaHoaDon);
    virtual float ThanhTien() ;
    friend ostream&operator <<(ostream &os,HoaDon b);
    friend istream&operator >>(istream &is,HoaDon &b);
};
#endif //HOADONPROJECT_HOADON_H
