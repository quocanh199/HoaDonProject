//
// Created by quocanh on 28/04/2020.
//

#ifndef HOADONPROJECT_HOADONDIEN_H
#define HOADONPROJECT_HOADONDIEN_H

#include "hoadon.h"
//#include <string>

class HoaDonDien: public HoaDon {
private:
    float kwTieuThu,DonGia;
    bool LoaiKhachHang;  /*false: ho gia dinh/ true: doanh nghiep */
public:
    HoaDonDien(int SoHoaDon, string TenKhachHang, Date NgayRaHoaDon, float kwTieuThu, float DonGia, bool LoaiKhachHang);
    float ThanhTien();
};
#endif //HOADONPROJECT_HOADONDIEN_H
