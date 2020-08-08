//
//  main.cpp
//  20140210_3
//
//  Created by JM Park on 2014. 2. 10..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    int x;
    int y;
    char * str;
public:
    test() { x=0; y=0;}
    test(int px, int py) {
        x=px;
        y=py;
        str=new char[10];
        strcpy(str,"test pgm");
    }
    test(test &ptest) {
        x=ptest.x;
        y=ptest.y;
        str=new char[strlen(ptest.str)+1];
        strcpy(str,ptest.str);
    }
    void print_out() {
        cout << x << " , " << y << endl;
        cout << str << endl;
    }
    ~test() {
        delete [] str;
    }
};

int main(int argc, const char * argv[])
{
    test num1;
    test num2=num1;
    num1=num2;
    num1.print_out();
    num2.print_out();
}

