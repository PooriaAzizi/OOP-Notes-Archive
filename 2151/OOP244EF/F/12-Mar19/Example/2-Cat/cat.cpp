#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace oop244{

 
  Cat::Cat(const char* name, int numOfLives):Animal(name){
    _numOfLives = numOfLives;
    prn("Creating ", this->name(), " the Cat");
  }
  void Cat::act(){
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  void Cat::move(){
    cout << "Move like " << name() << " the Cat" << endl;
  }
  void Cat::sound(){
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    prn("Killing ", name(), " the Cat");
  }
}