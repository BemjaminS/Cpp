//
//  Door.cpp
//  classes
//
//  Created by בן סויסה on 05/07/2021.
//
#include <iostream>
#include "Door.hpp"

using namespace std;

Door::Door(){
    cout << "Door Creat" << endl;

}

Door::~Door(){
    cout << "Destractur" << endl;

}
Door::void print(){
    cout << "Hello" << endl;

}

void Door::set_x(int _x){
    x=_x;
}
