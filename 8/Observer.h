//
// Created by Amir Yeshurun on 2020-05-26.
//

#ifndef OOP_OBSERVER_H
#define OOP_OBSERVER_H

class Observable;

class Observer {
public:
    virtual void update(Observable* o) = 0;
};

#endif //OOP_OBSERVER_H
