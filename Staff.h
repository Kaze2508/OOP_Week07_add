#pragma once
#include <iostream>
#include <string>

class Staff 
{
protected:
    std::string name;
    std::string birth;
    double salary;
public:
    Staff(std::string hoTen, std::string ngaySinh);
    virtual void countSalary();
    virtual void printInfo();
};