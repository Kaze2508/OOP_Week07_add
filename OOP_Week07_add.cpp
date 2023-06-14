#include <iostream>
#include "Staff.h"
#include "ManuStaff.h"
#include "OfficeStaff.h"

int main(int argc, char* argv[]) 
{
    ManuStaff manuStaff("Nguyen Van A", "01/01/1990", 3000000, 100);
    manuStaff.countSalary();
    manuStaff.printInfo();

    OfficeStaff officeStaff("Tran Thi B", "02/02/1995", 22);
    officeStaff.countSalary();
    officeStaff.printInfo();

    return 0;
}