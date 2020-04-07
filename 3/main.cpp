//
// Created by Amir Yeshurun on 2020-04-07.
//

/*
 * Create the following classes:
    - Employee: name, age, salary
    - Company: name, array (ptr) of employees, and CEO.
 * Create a copy CTOR for each class.
 * Each class should have a print method to print all of the members.
 */

#include "Company.h"


int main(){
    Company c = "Colman";
    Employee amir("amir", 19, 10);
    c.print();
}

