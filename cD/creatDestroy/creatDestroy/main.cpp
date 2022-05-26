//
//  main.cpp
//  creatDestroy
//
//  Created by בן סויסה on 27/07/2021.
//

#include <iostream>
using namespace std;

class creatDesrtoy{
public:
    creatDesrtoy(){
        cout << "creat" << endl;

    }
    ~creatDesrtoy(){
        cout << "destroy" << endl;

    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    creatDesrtoy* c1= new creatDesrtoy;
    for(int i=1 ; i<=2 ; i++){
        creatDesrtoy c2;
    }
    delete c1;

    return 0;
    
}


