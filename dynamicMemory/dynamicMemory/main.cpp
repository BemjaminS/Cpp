//
//  main.cpp
//  dynamicMemory
//
//  Created by בן סויסה on 04/07/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Bitches\n";
    
    int *p1, *p2;
    
    p1=new int;
    if (p1==NULL) {
        cout << "Error memory allocation" << endl;
        exit(EXIT_FAILURE);
    }
    *p1=100;
    
    p2= new int(9);
    if (p2==NULL) {
        cout << "Error Memory aloocated" << endl;
        exit(EXIT_FAILURE);
    }
    
    cout << "p1 points to the integer: " << *p1<< endl;
    cout << "p2 points to the integer: " << *p2<< endl;
    
    delete p1;
    delete p2;

    
    cout << "/n";

    
    
    
    return 0;
}
