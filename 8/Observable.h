//
// Created by Amir Yeshurun on 2020-05-26.
//

#ifndef OOP_OBSERVABLE_H
#define OOP_OBSERVABLE_H

#include "Observer.h"

class Observable{
protected:
    Observer** observers;
    int count;
public:
    Observable() : observers(nullptr), count(0) {}

    virtual void notifyObservers() {
        for(int i=0; i< count; ++i)
            observers[i]->update(this);
    }

    void addObserver(Observer* observer) {
        if(!count) {
            observers = new Observer*[1];
            observers[0] = observer;
            ++count;
            return;
        }
        Observer** tmpObservers = new Observer*[count+1];
        for(int i=0; i < count; ++i)
            tmpObservers[i] = observers[i];
        tmpObservers[count] = observer;
        delete[] observers;
        observers = tmpObservers;
        ++count;
    }
};

#endif //OOP_OBSERVABLE_H
