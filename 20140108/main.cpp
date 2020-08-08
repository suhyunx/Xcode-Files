//
//  main.cpp
//  20140108
//
//  Created by JM Park on 2014. 1. 8..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;



int main(int argc, const char * argv[])
{
    int a;
    int b;
    
    for(a=5; a>=1; a--) {
        for(b=1; b<=a; b++) {
            cout << " * ";
        }
        
        cout << endl;
    }
    
    
}