//
// Created by Amir Yeshurun on 2020-04-07.
//

#ifndef OOP_EMPLOYEE_H
#define OOP_EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee {
private:
    char* name;
    int age;
    int salary;
public:
    Employee();
    Employee(char* newName, int newAge, int newSalary);
    Employee(const Employee& e); //copy CTOR

    void setName(char* newName);
    void setAge(int newAge);
    void setSalary(int newSalary);

    const char* getName() const;
    int getAge() const ;
    int getSalary() const;
    bool equals(const Employee& e) const;
    void print() const;

    //~Employee();
};


#endif //OOP_EMPLOYEE_H

