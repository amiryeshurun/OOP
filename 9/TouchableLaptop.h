//
// Created by Amir Yeshurun on 2020-06-02.
//

#ifndef OOP_TOUCHABLELAPTOP_H
#define OOP_TOUCHABLELAPTOP_H

#include "TouchableDevice.h"
#include "Laptop.h"

class TouchableLaptop : public Laptop, public TouchableDevice {
public:
    TouchableLaptop(int x, int y, const string &deviceName, double price, int memory, const string &brand,
            int keyboardX, int keyboardY, int minimumPressure) :
            Device(x, y, deviceName, price, memory, brand),
            Laptop(x, y, deviceName, price, memory, brand, keyboardX, keyboardY),
            TouchableDevice(x, y, deviceName, price, memory, brand, minimumPressure) {}
    virtual void print() const {
        Device::print();
        Laptop::printMyself();
        TouchableDevice::printMyself();
    }

};

#endif //OOP_TOUCHABLELAPTOP_H
