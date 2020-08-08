//
//  main.cpp
//  20131230
//
//  Created by JM Park on 2013. 12. 30..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void add(int, int, int);
void add(int, int);
void add(float, float);


int main(int argc, const char * argv[])
{

    add(5,10,20);
    add(100,500);
    add(1.0f,5.0f);
}

void add(int a, int b, int c) {
    
    cout << a+b+c << " -> 3개의 인수를 가진 add함수 " << endl;
    
}

void add(int a, int b) {
    cout << a+b << " -> 2개의 인수를 가진 add함수 " << endl;
}

void add(float a, float b) {
    
    cout << a+b << " -> 2개의 인수를 가진 add함수(소수점) " << endl;
}