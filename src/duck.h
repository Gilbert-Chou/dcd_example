#ifndef DUCK_H
#define DUCK_H
#include <string>
#include <iostream>
#include "bird.h"
#include "swim.h"

using namespace std;

class Duck: public Bird, Swim{
public:
    Duck(int life, string name, int strength): Bird(life, name, strength){}

    string call(){
        if(_life > 0)
            return _name + ": quack quack quack！";
        else return _name + "is dead......";
    }

    string swimming(){
        _life -= 5;
        return _name + " is swimming now";
    }

private:

};

#endif