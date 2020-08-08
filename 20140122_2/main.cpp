//
//  main.cpp
//  20140122_2
//
//  Created by JM Park on 2014. 1. 22..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int arr[2][3]={100,200,300,400,500,600};
    
    cout << &arr[0][0] << endl;
    cout << arr << endl;
    cout << sizeof(arr) << endl;
    cout << arr+1 << endl;
    cout << *arr << endl;
    
    cout << *(arr+1) << endl;
    
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            cout << *(arr+1) << endl;
    
    
}

