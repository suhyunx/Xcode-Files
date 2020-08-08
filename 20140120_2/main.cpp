//
//  main.cpp
//  20140120_2
//
//  Created by JM Park on 2014. 1. 20..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void add(int *x, int *y, int * presult);

int main(int argc, const char * argv[])
{
    
    int a=9;
    int b=120;
    int result=0;
    
    cout << & a << & b << & result << endl;
    add(&a, &b, &result);
    
}

void add(int *x, int *y, int * presult) {
    
    cout << x << " / ";
    cout << y << " / ";
    cout << presult << endl;
    cout << *x << " / ";
    cout << *y << endl;
    cout << *presult << endl;
}