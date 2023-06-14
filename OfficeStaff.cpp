#include "OfficeStaff.h"

OfficeStaff::OfficeStaff(std::string name, std::string birth, int daysOfWork) : Staff(name, birth), daysOfWork(daysOfWork) {}

void OfficeStaff::countSalary() 
{
    salary = daysOfWork * 100000;
}