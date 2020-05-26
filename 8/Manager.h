//
// Created by Amir Yeshurun on 2020-05-26.
//

#ifndef OOP_MANAGER_H
#define OOP_MANAGER_H

#include "Observer.h"
#include "SecurityAlarm.h"
#include <iostream>
#include "Employee1.h"

using namespace std;

class Manager : public Observer {
public:
    virtual void update(Observable* o) {
        if(typeid(*o) == typeid(SecurityAlarm)) {
            SecurityAlarm *alarm = (SecurityAlarm *) o;
            cout << "The status of the alarm is: " << alarm->isActive() << endl;
        }
        else if(typeid(*o) == typeid(Employee1)) {
            Employee1 *employee = (Employee1 *) o;
            cout << "Employee " << employee->getName() << " finished" << endl;
        }
    }
};

#endif //OOP_MANAGER_H
