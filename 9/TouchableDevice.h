//
// Created by Amir Yeshurun on 2020-06-02.
//

#ifndef OOP_TOUCHABLEDEVICE_H
#define OOP_TOUCHABLEDEVICE_H

#include "Device.h"

class TouchableDevice : public virtual Device{
private:
    double minimumPressure;
public:
    TouchableDevice(int x, int y, const string &deviceName, double price, int memory, const string &brand,
                    double minimumPressure) : Device(x, y, deviceName, price, memory, brand),
                    minimumPressure(minimumPressure) {}

    double getMinimumPressure() const {
        return minimumPressure;
    }

    void setMinimumPressure(double minimumPressure) {
        TouchableDevice::minimumPressure = minimumPressure;
    }

    virtual void printMyself() const {
        cout << minimumPressure << " ";
    }

    virtual void print() const {
        Device::print();
        printMyself();
    }
};

#endif //OOP_TOUCHABLEDEVICE_H
