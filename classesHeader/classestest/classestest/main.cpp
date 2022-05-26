//
//  main.cpp
//  classestest
//
//  Created by בן סויסה on 28/07/2021.
//

#include <iostream>
#include "Dog.hpp"
#include "Boy.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    cout<<"hello world\n";
    Dog d1(4, "shoko", "brown");
    d1.setColor("white");
    cout << d1.getColor() << endl;
    cout << d1.getNol() <<endl;
    

    Boy b1 (12, "Ben");
    cout<< b1.getAge() <<"\n";
    cout<< b1.getName()<<"\n";
    
    


    
    
    return 0;
}
