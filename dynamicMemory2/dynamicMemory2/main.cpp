//
//  main.cpp
//  dynamicMemory2
//
//  Created by בן סויסה on 04/07/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Bitches!\n";
    
    int size , *arr;
    cout << "Enter a size of the array" << endl;
    cin >> size ;
    arr = new int[size];//dynamin memory
    
    
    if (arr==NULL) {
        cout << "Error Memory allocated" << endl;
        exit(EXIT_FAILURE);
    }
    
    for(int i=0 ; i < size ; i++){
        cout << (*(arr+i)) << " ";
    }
    
    cout << "\nPlease enter " <<size << " Number" <<endl;
    for(int i=0 ; i< size ; i++){
        cin >> *(arr+i);
    }
    
    for(int i=0 ; i< size ; i++){
        cout << arr[i] << " ";

    }

    delete [] arr;

    
    return 0;
}
