#pragma once
#include "Staff.h"
#include <iostream>
#include <string>

class OfficeStaff : public Staff 
{
private:
    int daysOfWork;
public:
    OfficeStaff(std::string name, std::string birth, int daysOfWork);
    void countSalary();
};