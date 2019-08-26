#ifndef BIRDS_H
#define BIRDS_H
#include <string>
#include <iostream>
#include <vector>
#include "bird.h"
using namespace std;

class Birds: public Bird{
public:

    Birds(Bird* b) {
        _birds.push_back(b);
    }

    Birds(vector<Bird*> b): _birds(b) {}

    string call(){
        string str = "";
        for (std::vector<Bird*>::iterator it = _birds.begin() ; it != _birds.end(); ++it){
            str.append((*it)->call());
            str.append("\n");
        }
        return str.substr(0, str.size()-1);
    }

    void addBird(Bird *b){
        _birds.push_back(b);
    }
private:
    vector<Bird*> _birds;
};

#endif