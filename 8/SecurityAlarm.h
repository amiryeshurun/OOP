//
// Created by Amir Yeshurun on 2020-05-26.
//

#ifndef OOP_SECURITYALARM_H
#define OOP_SECURITYALARM_H

#include "Alarm.h"
#include "Observable.h"

class SecurityAlarm : public MyAlram, public Observable {
private:
    bool active;
public:
    virtual void start() {
        active = true;
        notifyObservers();
    }
    virtual void stop() {
        active = false;
        notifyObservers();
    }
    bool isActive() {
        return active;
    }
    virtual void notifyObservers() {
        for(int i=0; i< count; ++i)
            observers[i]->update(this);
    }
};

#endif //OOP_SECURITYALARM_H
