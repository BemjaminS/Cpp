//
//  Dog.hpp
//  classestest
//
//  Created by בן סויסה on 28/07/2021.
//
#include <iostream>
#ifndef Dog_hpp
#define Dog_hpp
using namespace std;

#include <stdio.h>

class Dog{
public:
    Dog(int nol , string name , string color);
    Dog &setName(string _color);
    string getName();
    Dog &setColor(string _color);
    string getColor();
    int getNol();
private:
    const int nol;
    string name ,color;

};



#endif /* Dog_hpp */
