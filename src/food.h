#ifndef FOOD_H
#define FOOD_H
#include <string>
#include <iostream>
using namespace std;

class Food{
public:
  Food(string foodName, int lifePoint){
    _foodName = foodName;
    _lifePoint = lifePoint;
  }

  int getLifePoint(){
    return _lifePoint;
  }

  string toString(){
    return "Food: " + _foodName;
  }

private:
  string _foodName;
  int _lifePoint; //增加生命值的數值大小
};

#endif
