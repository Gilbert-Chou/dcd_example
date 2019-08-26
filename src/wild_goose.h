#ifndef WILDGOOSE_H
#define WILDGOOSE_H
#include <string>
#include <iostream>
#include "bird.h"

using namespace std;

class WildGoose: public Bird{
public:
    WildGoose(int life, string name, int strength): Bird(life, name, strength){}

    string call(){
        if(_life > 0)
            return _name + ": honks honks honks！";
        else return _name + "is dead......";
    }

private:
};

#endif