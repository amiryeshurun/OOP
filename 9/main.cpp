#include <iostream>

/*
 * Create the following classes:
 * Device: screen size, device name, price, memory, brand
 * Laptop: keyboard size
 * TouchableDevice: minimumPressure
 * TouchableLaptop: Laptop + TouchableDevice
 */


#include "TouchableLaptop.h"

// "fake" << operator
ostream& operator<<(ostream& out, Device& d) {
    d.print();
    return out;
}

int main_9() {
    TouchableLaptop touchableLaptop(1, 2, "myDevice", 90, 90, "Device Inc", 5, 7, 10);
    cout << touchableLaptop << endl;
    return 0;
}

