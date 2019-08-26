#ifndef BIRD_H
#define BIRD_H
#include "animal.h"
#include "wing.h"

class Bird : public Animal{
public:
    Bird(){}
    Bird(int life, string name, int strength) : Animal(life, name){
        _leftWing = new Wing(strength);
        _rightWing = new Wing(strength);
    }

    //鳥叫
    virtual string call() = 0;

private:
    Wing *_leftWing, *_rightWing;

};

#endif