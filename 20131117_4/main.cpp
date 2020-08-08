//
//  main.cpp
//  20131117_4
//
//  Created by JM Park on 13. 11. 17..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    
    do {
        {
            sum += i;
            
            ++i;
        }
    } while (i <= 10);
    
    
    cout << " 현재 i의 값 = " << i << endl;
    cout << " 1~10 까지의 합 = " <<  sum << endl;
    
    return 0;
    
    
}