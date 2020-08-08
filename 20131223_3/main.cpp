//
//  main.cpp
//  20131223_3
//
//  Created by JM Park on 2013. 12. 23..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void testf(int &x);

int main(int argc, const char * argv[])
{
    int a=5;
    int & ra=a;
    int b=10;
    ra=b;
    testf(a);
    
    cout << a << endl;
    cout << ra << endl;
}

void testf(int &x) {
    x=10;
}

