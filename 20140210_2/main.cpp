//
//  main.cpp
//  20140210_2
//
//  Created by JM Park on 2014. 2. 10..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void add(int a, int b, int &c) {
    c=a+b;
}

int main(int argc, const char * argv[])
{
    int x=100;
    int y=200;
    int nyam;
    add(x,y,nyam);
    cout << nyam << endl;
}

