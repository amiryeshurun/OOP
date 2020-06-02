//
// Created by Amir Yeshurun on 2020-06-02.
//

#ifndef OOP_DEVICE_H
#define OOP_DEVICE_H

#include "Pair.h"
#include <string>
#include <iostream>

using namespace std;

class Device{
private:
    Pair screenSize;
    string deviceName;
    double price;
    int memory;
    string brand;
public:
    Device(int x, int y, const string &deviceName, double price, int memory, const string &brand)
            : deviceName(deviceName), price(price), memory(memory), brand(brand) {
        screenSize.x = x;
        screenSize.y = y;
    }

    const Pair &getScreenSize() const {
        return screenSize;
    }

    void setScreenSize(const Pair &screenSize) {
        Device::screenSize = screenSize;
    }

    const string &getDeviceName() const {
        return deviceName;
    }

    void setDeviceName(const string &deviceName) {
        Device::deviceName = deviceName;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        Device::price = price;
    }

    int getMemory() const {
        return memory;
    }

    void setMemory(int memory) {
        Device::memory = memory;
    }

    const string &getBrand() const {
        return brand;
    }

    void setBrand(const string &brand) {
        Device::brand = brand;
    }


    virtual void print() const {
        // x, y, brand, device name, price, memory
        cout << screenSize.x << " " << screenSize.y << " " << brand << " " <<
        deviceName << " " << price << " " << memory << " ";
    }
};

#endif //OOP_DEVICE_H
