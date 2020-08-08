//
//  main.cpp
//  20140530
//
//  Created by JM Park on 2014. 5. 30..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void fnc(int abc) {
    if((abc & 0x00000001) == 0x00000001)
        cout << " 첫번째 비트: ";
    if((abc & 0x00000010) == 0x00000010)
        cout << " 두번째 비트: ";
    if((abc & 0x00000100) == 0x00000100)
        cout << " 세번째 비트: ";
    if((abc & 0x00001000) == 0x00001000)
        cout << " 네번째 비트: ";
    
}

int main(int argc, const char * argv[])
{
    fnc(1 | 2 | 8);
}

