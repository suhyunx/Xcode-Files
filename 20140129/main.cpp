//
//  main.cpp
//  20140129
//
//  Created by JM Park on 2014. 1. 29..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

struct num {
    int num1;
    int num2;
    char * str;
};

void testf(num a) {
    cout << a.num1 << " , " << a.num2 << endl;
}

void outtest(num *pa1) {
    for(int i=0;i<3;i++) {
        cout << pa1[i].num1;
        cout << (pa1+i)->num2 << endl;
        cout << pa1[i].str;
        
    }
}

int main(int argc, const char * argv[])
{
    num arr[3];
    num *pa;
    pa=arr;
    
    for(int i=0; i<3; i++) {
        cin >> (pa+i)->num1;
        cin >> (pa+i)->num2;
        (pa+i)->str=new char[50];
        cin >> (pa+i)->str;
    }
    
    outtest(arr);
//     cout << (*(arr+1)).num1 << endl;
//     cout << (arr+0)->num1 << endl;
    
    
    /*
    num a;
    num b;
    a.num1=5;
    a.num2=10;
    
    b.num1=100;
    b.num2=200;
    
    testf(a);
    testf(b);
    */
}

