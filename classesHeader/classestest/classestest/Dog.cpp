//
//  Dog.cpp
//  classestest
//
//  Created by בן סויסה on 28/07/2021.
//

#include "Dog.hpp"
using namespace std;

Dog::Dog (int _nol , string _name , string _color): nol(_nol){
    name=_name;
    color=_color;
    
};

Dog& Dog:: setName(string _name){
    name=_name;
    return *this;
};

string Dog ::getName(){
    return this->name;
};
Dog& Dog :: setColor(string _color){
    color= _color;
    return *this;
}
string Dog::getColor(){
    return color;
}
int Dog:: getNol(){
    return this->nol;
}
