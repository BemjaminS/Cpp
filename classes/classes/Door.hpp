//
//  Door.hpp
//  classes
//
//  Created by בן סויסה on 05/07/2021.
//

#ifndef Door_hpp
#define Door_hpp

#include <stdio.h>
using namespace std;

#endif /* Door_hpp */

class Door{
    
    
    
protected:
    int i;
    double j;
    
private:
    int x;
    float m;
    
    
protected:
    void set_x(int _x);
public:
    int get_x();
    void print();
    Door();
    ~Door();
    Door(int x);
    
    
    
};
