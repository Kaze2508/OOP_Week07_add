#include <iostream>
#include "Staff.h"
#include "ManuStaff.h"
#include "OfficeStaff.h"

int main(int argc, char* argv[]) 
{
    NhanVienSanXuat nvsx("Nguyen Van A", "01/01/1990", 3000000, 100);
    nvsx.tinhLuong();
    nvsx.inThongTin();

    NhanVienVanPhong nvvp("Tran Thi B", "02/02/1995", 22);
    nvvp.tinhLuong();
    nvvp.inThongTin();

    return 0;
}