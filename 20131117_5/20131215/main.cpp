//
//  main.cpp
//  20131215
//
//  Created by JM Park on 13. 12. 15..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void input(int a) {
    
    
    int i=0;
    
    for(i=1; i<10; i++)
        cout << a*i << endl;
}

int main(int argc, const char * argv[])
{
    int x;
    
    cin >> x;
    
    input(x);
    
}

