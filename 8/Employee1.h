//
// Created by Amir Yeshurun on 2020-05-26.
//

#ifndef OOP_EMPLOYEE_H
#define OOP_EMPLOYEE_H

#include <string>
#include "Observable.h"

using namespace std;

class Employee1 : public Observable {
private:
    string name;
public:
    Employee1(string new_name) : name(new_name) {}
    string getName() {
        return name;
    }
    void endOfDay() {
        notifyObservers();
    }
    virtual void notifyObservers() {
        for(int i=0; i< count; ++i)
            observers[i]->update(this);
    }
};

#endif //OOP_EMPLOYEE_H
