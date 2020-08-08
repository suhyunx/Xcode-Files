//
//  main.cpp
//  20131123_2
//
//  Created by JM Park on 13. 11. 23..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a[10];
    
    for(int i=0; i<10; i++)
        *(a+i)=i;
    for(int i=0; i<10; i++)
        cout << *(a+i) << endl;

}

