//
//  Boy.cpp
//  classestest
//
//  Created by בן סויסה on 28/07/2021.
//
#include <iostream>
#include "Boy.hpp"

Boy::Boy(int _age , string _name){
    age=_age;
    name=_name;
};

Boy& Boy::setAge(int _age){
    return *this;
};

 string Boy ::getName(){
    return name;
};

Boy& Boy::setName(string _name){
    return *this;
}

int Boy:: getAge(){
    return age;
}
