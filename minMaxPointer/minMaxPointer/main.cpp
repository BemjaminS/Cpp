//
//  main.cpp
//  minMaxPointer
//
//  Created by בן סויסה on 04/07/2021.
//

#include <iostream>
using namespace std;
void minMaxByP(int arr[] ,int size , int* min , int* max);


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    int size;
    int min=0;
    int max =0;
    cout << "Enter value to array size" << endl;
    cin >> size;
    


    int arr [size];
    
    for(int i=0 ; i< size ; i++){
        cin >> arr[i];
    }
    
    minMaxByP(arr ,size , &min , &max);
    
    cout << "max is: " << max << endl;
    cout << "min is: " << min << endl;


    

    
    
    
    return 0;
}

void minMaxByP(int arr[] , int size , int* min , int* max){
    *min = *max = arr[0];
    
    for(int i=0 ; i< size ; i++){
        if (*min>=arr[i]) {
            *min=arr[i];
        }
        if (*max<arr[i]) {
            *max=arr[i];
        }
        
    }

}
