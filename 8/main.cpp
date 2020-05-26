//
// Created by Amir Yeshurun on 2020-05-26.
//


#include <iostream>
#include "SecurityAlarm.h"
#include "Manager.h"
#include <zconf.h>

using namespace std;

int main() {
    SecurityAlarm securityAlarm;
    Employee1 employee1("Amir");
    Manager manager;

    // testing SA
    securityAlarm.addObserver(&manager);
    securityAlarm.start();
    securityAlarm.stop();

    // testing multiple observables
    employee1.addObserver(&manager);
    employee1.endOfDay();
    return 0;
}