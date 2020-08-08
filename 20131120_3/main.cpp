//
//  main.cpp
//  20131120_3
//
//  Created by JM Park on 13. 11. 20..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    const int size=5;
    int num[size];
    int *pnum;
    
    pnum=num;
    
    for(int i=0; i<size; i++) {
        cout << pnum + i << endl;
    }
    
    return 0;
}

