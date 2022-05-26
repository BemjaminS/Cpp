//
//  main.cpp
//  charArr
//
//  Created by בן סויסה on 04/07/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    char nString[] = "Daisy";
    char n2String[] ="Rose";
    char* whatever;
    
    cout << "whatever pointer is:" << &whatever<< endl; //print the pointer
    whatever=nString;//whatever stored the value of nString
    cout << "whatever is:" << whatever<< endl;
    whatever=n2String;//whatever stored the value of n2String
    cout << "whatever is:" << whatever<< endl;
    cout << "The data at whatever is:" << *whatever << endl;//the value of the first character in n2String and whatever
    *whatever='H';
    cout << "change the value of R to 'H'" << endl;
    cout << "whatever is:" <<whatever << endl;
    cout << "nString2 is now:" << n2String << endl;
    
    cout << "Print char array by pointer" << endl;
    while(*whatever != '\0'){
        cout << *whatever;
        ++whatever;
    }
    cout <<"\n";

    




    

    


    
    
    return 0;
}
