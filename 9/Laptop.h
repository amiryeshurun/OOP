//
// Created by Amir Yeshurun on 2020-06-02.
//

#ifndef OOP_LAPTOP_H
#define OOP_LAPTOP_H

#include "Device.h"

class Laptop : public virtual Device {
private:
    Pair keyboardSize;
public:
    Laptop(int x, int y, const string &deviceName, double price, int memory, const string &brand,
           int keyboardX, int keyboardY) : Device(x, y, deviceName, price, memory, brand) {
        keyboardSize.x = keyboardX;
        keyboardSize.y = keyboardY;
    }

    const Pair &getKeyboardSize() const {
        return keyboardSize;
    }

    void setKeyboardSize(const Pair &keyboardSize) {
        Laptop::keyboardSize = keyboardSize;
    }

    void printMyself() const {
        cout << keyboardSize.x << " " << keyboardSize.y << " ";
    }

    virtual void print() const {
        Device::print();
        printMyself();
    }
};

#endif //OOP_LAPTOP_H
