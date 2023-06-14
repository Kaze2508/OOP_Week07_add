#pragma once
#include "Staff.h"
#include <iostream>
#include <string>

class ManuStaff : public Staff 
{
private:
    double basicSalary;
    int numProduct;
public:
    ManuStaff(std::string name, std::string birth, double basicSalary, int numProduct);
    void countSalary();
};