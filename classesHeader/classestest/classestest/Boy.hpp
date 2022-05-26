//
//  Boy.hpp
//  classestest
//
//  Created by בן סויסה on 28/07/2021.
//
#include <iostream>
#ifndef Boy_hpp
#define Boy_hpp
using namespace std;

#include <stdio.h>



class Boy{
public:
    Boy(int age , string name);
    string getName();
    Boy& setName(string _name);
    int getAge();
    Boy& setAge(int _age);
    
private:
    int age;
    string name;
};

#endif /* Boy_hpp */
