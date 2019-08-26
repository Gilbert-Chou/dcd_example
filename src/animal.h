#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
#include "food.h"
using namespace std;


class Animal {
public:
  Animal(){}
  Animal(int life, string name): _life(life), _name(name){ }  

  void eat(Food *food){
    _life += food->getLifePoint();
  }

  void movement(){
    _life--;
  }


  string toString(){
    return "I'm " + _name + ". I have " + to_string(_life) + "HP.";
  }

protected:
  int _life; //生命值，吃食物可以補充生命，做動作會減少壽命
  string _name;
};

#endif
