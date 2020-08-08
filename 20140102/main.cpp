//
//  main.cpp
//  20140102
//
//  Created by JM Park on 2014. 1. 2..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class testclass {
protected:
    int i;
    int j;
public:
    testclass() { i=10; j=20; }
    void tf() {
        cout << i << " , " << j;
    }
};
  
class subclass : testclass {
    
public:
    subclass() {
        i=100;
        j=200;
    }
    void af() {
        cout << i << " , " << j << endl;
    }
};


int main(int argc, const char * argv[])
{
    testclass abc;
    abc.tf();
    
    subclass xyz;
    xyz.af();
}

