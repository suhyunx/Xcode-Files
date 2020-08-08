//
//  main.cpp
//  20140109
//
//  Created by JM Park on 2014. 1. 9..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class abc {
protected:
public:
    virtual void view()=0;
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
        
    }
};

class pq : abc {
private:
    int s;
    int t;
public:
    pq() {
        s=50;
        t=60;
    }
    virtual void view() {
        cout << s << endl;
        cout << t << endl;
    }
};


int main(int argc, const char * argv[])
{
    abc *pa;
    xyz x;
    pq p;
    pa=(abc *)&x;
    pa->view();
    pa=(abc *)&p;
    pa->view();
    
    
}