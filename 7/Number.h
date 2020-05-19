//
// Created by Amir Yeshurun on 2020-05-19.
//

#ifndef OOP_NUMBER_H
#define OOP_NUMBER_H

#include "Expression.h"

class Number : public Expression {
private:
    double value;
public:
    Number(double new_value) : value(new_value) {}
    virtual double calculate() {
        return value;
    }
};

#endif //OOP_NUMBER_H
