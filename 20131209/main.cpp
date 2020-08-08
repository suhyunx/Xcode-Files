//
//  main.cpp
//  20131209
//
//  Created by JM Park on 13. 12. 9..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>


using namespace std;

void int_to_ascii(int a);


int main(int argc, const char * argv[])
{
    int ch;
    cin >> ch;
    int_to_ascii(ch);
    
    
}


void int_to_ascii(int a) {
    
    cout << (char)a << endl;
    
}