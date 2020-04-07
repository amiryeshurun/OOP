//
// Created by Amir Yeshurun on 2020-04-07.
//

#ifndef OOP_COMPANY_H
#define OOP_COMPANY_H

#include "Employee.h"

class Company {
private:
    char* name;
    Employee** employees;
    int numOfEmployees;
    Employee* CEO;
public:
    Company();
    Company(char* newName);
    Company(const Company& c);

    void addEmployee(const Employee& e);
    void setCEO(const Employee& e);
    void print() const;

    //~Company();
};


#endif //OOP_COMPANY_H
