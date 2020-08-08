//
//  main.cpp
//  20131117_5
//
//  Created by JM Park on 13. 11. 17..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    char health=100;
    char damage=0;
   
    
    cin >> damage;
    
    
    if (health<=0)
    {
        cout << " Game Over " << endl;
    }
    if (health>0)
    {
        cout << " Continue " << endl;
    }
    
    return 0;
}

