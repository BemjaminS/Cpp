//
//  main.cpp
//  aritmeticPointer
//
//  Created by בן סויסה on 05/07/2021.
//

#include <iostream>
using namespace std;
void Switch (int *ptr);

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    int arr [] = {100 , 200 , -300 , -400 , -500};
    int* ptr = arr;
    
    for(int i=0 ; i< sizeof(arr)/sizeof(arr[0]) ; i++){
        cout << *(ptr+i) << " ";
    }
    cout << "\n";


    
    Switch(ptr);
    
    


    
    return 0;
}

void Switch( int *ptr){

    cout << *(ptr+4)<<" ";
    cout << *(ptr+3)<<" ";
    cout << *(ptr+2)<<" ";
    cout << *(ptr+1)<<" ";
    cout << *(ptr)<<" ";
    
    cout <<"\n";
    
    
    
}
