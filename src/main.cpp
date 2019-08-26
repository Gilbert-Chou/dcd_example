#include <iostream>
#include <string>
#include "animal.h"
#include "bird.h"
#include "birds.h"
#include "duck.h"
#include "wild_goose.h"
#include "food.h"
using namespace std;

//main不須畫進Class Diagram
int main()
{
  Animal *a = new Animal(100, "animal01");
  cout << a->toString() << '\n';
  a->eat(new Food("apple", 2));
  cout << a->toString() << '\n';
  a->movement();
  cout << a->toString() << '\n';

  Bird *b = new Duck(100, "Duck01", 20);
  cout << b->call() << endl;
  cout << dynamic_cast<Duck *>(b)->swimming() << endl;

  cout << "===Birds test===" << endl;
  Birds *birds = new Birds(b);
  birds->addBird(new WildGoose(100, "WildGoose01", 50));
  birds->addBird(new Duck(100, "Duck02", 10));
  cout << birds->call() << endl;

  return 0;
}
