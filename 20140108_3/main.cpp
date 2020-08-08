//
//  main.cpp
//  20140108_3
//
//  Created by JM Park on 2014. 1. 8..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class abc {
protected:
    int i;
    int j;
public:
    abc() {
        i=10;
        j=20;
    }
    virtual void view() {
        cout << i << endl;
        cout << j << endl;
    }
};

class xyz : abc {
private:
    int x;
    int y;
public:
    xyz() {
        x=30;
        y=40;
    }
    virtual void view() {
        cout << x << endl;
        cout << y << endl;
        abc test;
        test.view();
    }
};


int main(int argc, const char * argv[])
{
    xyz x;
    xyz *px;
    abc * a;
    abc b;
    a=&b;
    a->view();
    a=(abc *)&x;
    a->view();
    
    px=&x;
    px->view();
    px=(xyz *)&b;
    px->view();
    
    
}

