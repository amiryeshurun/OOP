//
// Created by Amir Yeshurun on 2020-04-07.
//

#include "Employee.h"

Employee::Employee() : name(nullptr), age(0), salary(0) {}

Employee::Employee(char *newName, int newAge, int newSalary) : age(newAge), salary(newSalary) {
    name = strdup(newName);
}

Employee::Employee(const Employee& e) : age(e.age), salary(e.salary) {
//    age = e.age;
//    salary = e.salary;
    name = strdup(e.name);

}

void Employee::setName(char* newName){
    name = strdup(newName);
}

void Employee::setAge(int newAge) {
    age = newAge;
}

void Employee::setSalary(int newSalary) {
    salary = newSalary;
}

const char* Employee::getName() const {
    return name;
}

int Employee::getAge() const {
    return age;
}

int Employee::getSalary() const {
    return salary;
}

bool Employee::equals(const Employee& e) const {
    return age == e.age && salary == e.salary && (!strcmp(name, e.name));
}

void Employee::print() const {
    cout << "Employee name: " << name << endl << "Employee age: " << age << endl
    << "Employee salary: " << salary << endl;
}