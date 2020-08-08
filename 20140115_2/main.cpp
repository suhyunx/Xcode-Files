//
//  main.cpp
//  20140115_2
//
//  Created by JM Park on 2014. 1. 15..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;


void add();

void mdd();

int main(int argc, const char * argv[])
{
    
    add();
    mdd();
    
}


void add() {
    
    int x;
    int y;
    
    cin >> x;
    cin >> y;
    
    cout << "X + Y 는 " << x+y << " 입니다 " << endl;
}


void mdd() {
    
    int x;
    int y;
    
    cin >> x;
    cin >> y;
    
    cout << "X - Y 는 " << x-y << " 입니다 " << endl;
}