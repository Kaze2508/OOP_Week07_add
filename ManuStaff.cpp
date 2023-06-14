#include "ManuStaff.h"

ManuStaff::ManuStaff(std::string name, std::string birth, double basicSalary, int numProduct) : Staff(name, birth), basicSalary(basicSalary), numProduct(numProduct) {}

void ManuStaff::countSalary() 
{
    salary = basicSalary + numProduct * 5000;
}