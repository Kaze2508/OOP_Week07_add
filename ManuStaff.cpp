#include "ManuStaff.h"

ManuStaff::ManuStaff(std::string name, std::string birth, double basicSalary, int numProduct) : NhanVien(hoTen, ngaySinh), luongCanBan(luongCanBan), soSanPham(soSanPham) {}
void tinhLuong() {
    luong = luongCanBan + soSanPham * 5000;
}