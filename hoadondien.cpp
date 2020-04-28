//
// Created by quocanh on 28/04/2020.
//
#include "hoadondien.h"
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

HoaDonDien::HoaDonDien():HoaDon() {
    kwTieuThu = 0;
    DonGia = 0;
    LoaiKhachHang = false;
}
HoaDonDien::HoaDonDien(int SoHoaDon, string TenKhachHang, Date NgayRaHoaDon, float kwTieuThu, float DonGia,
                       bool LoaiKhachHang):HoaDon(SoHoaDon, TenKhachHang, NgayRaHoaDon){
    this->kwTieuThu = kwTieuThu;
    this->DonGia = DonGia;
    this->LoaiKhachHang = LoaiKhachHang;
}
float HoaDonDien::ThanhTien() {
    if (this->LoaiKhachHang == false){
        return this->DonGia;
    }
    return this->DonGia*1.1;
}
