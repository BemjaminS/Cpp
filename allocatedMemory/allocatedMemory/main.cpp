//
//  main.cpp
//  allocatedMemory
//
//  Created by בן סויסה on 05/07/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    int size =0;
    cout << "Enter number to array size " << endl;
    cin >> size ;

    int* arr;
    arr = new int[size] {0};
    
    if (arr==NULL) {
        cout << "Error allocated memory" << endl;
        exit(EXIT_FAILURE);
    }
    else{
        cout << "Enter " << size << " varible" << endl;
        for(int i=0 ; i< size ; i++){
            cin >> arr[i] ;
        }
    }
    
    for(int i=0 ; i< size ; i++){
        cout << arr[i] << " ";

    }
    cout << " " << endl;


    
    return 0;
}
