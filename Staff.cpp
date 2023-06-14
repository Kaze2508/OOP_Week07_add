#include "Staff.h"

Staff::Staff(std::string name, std::string birth) : name(name), birth(birth) {}

void Staff::countSalary()
{
    salary = 0;
}

void Staff::printInfo() 
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Date of Birth: " << birth << std::endl;
    std::cout << "Salary: " << salary << std::endl;
}