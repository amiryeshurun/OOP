//
// Created by Amir Yeshurun on 2020-05-26.
//

#ifndef OOP_ALARM_H
#define OOP_ALARM_H

#include <iostream>

using namespace std;

class MyAlram {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

#endif //OOP_ALARM_H
