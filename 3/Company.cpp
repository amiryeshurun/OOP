//
// Created by Amir Yeshurun on 2020-04-07.
//

#include "Company.h"

Company::Company() : name(nullptr), employees(nullptr), numOfEmployees(0), CEO(nullptr) {}

Company::Company(char* newName) : name(strdup(newName)), employees(nullptr), numOfEmployees(0), CEO(nullptr) {}

Company::Company(const Company& c) {
    name = strdup(c.name);
    numOfEmployees = c.numOfEmployees;
    employees = new Employee*[numOfEmployees];
    for(int i = 0; i < numOfEmployees; i++) {
        employees[i] = new Employee(*(c.employees[i]));
        if(c.CEO->equals(*(employees[i])))
            CEO = employees[i];
    }
}

void Company::addEmployee(const Employee& e) {
    if(!numOfEmployees) {
        employees = new Employee*[1];
        employees[0] = new Employee(e);
        ++numOfEmployees;
        return;
    }
    Employee** tmpEmployees = new Employee*[numOfEmployees + 1];
    for(int i = 0; i < numOfEmployees; i++)
        tmpEmployees[i] = employees[i];
    tmpEmployees[numOfEmployees] = new Employee(e);
    delete[] employees;
    employees = tmpEmployees;
    ++numOfEmployees;
}

void Company::setCEO(const Employee& e){
    // if the new CEO is in the employees array
    for(int i=0; i < numOfEmployees; i++) {
        if(e.equals(*(employees[i]))) {
            CEO = employees[i];
            return;
        }
    }
    // the new CEO is NOT in the employees array
    addEmployee(e);
    CEO = employees[numOfEmployees - 1]; //last element in the array
}

void Company::print() const {
    cout << "Compnay name: " << name << endl << "Number of employees: " << numOfEmployees << endl
    << "***** COMPANY WORKERS: *****" << endl;
    for(int i=0; i< numOfEmployees; i++)
        employees[i]->print();
    cout << "The CEO: " << endl;
    CEO->print();
}
