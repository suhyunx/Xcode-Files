//
//  main.cpp
//  20131123
//
//  Created by JM Park on 13. 11. 23..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    int x, y, z;
    int num1, num2, num3;
    int strike=0;
    int ball=0;
    int out=0;
    int count=0;
    
    x=4, y=5, z=9;
    
    while(1) {
        
        cout << " Write your numbers. " << endl;
        
        cin >> num1;
        cin >> num2;
        cin >> num3;
        
        if(x==num1)
            strike++;
        else if(x==num2 || num3)
            ball++;
        else
            out++;
        
        if(y==num2)
            strike++;
        else if(y==num1 || num3)
            ball++;
        else
            out++;
        
        if(z==num3)
            strike++;
        else if(z==num1 || z==num2)
            ball++;
        else
            out++;
            count++;
        
        if(strike==3) {
            cout << " It's Strike. Game Over.. " << endl;
            break;
        }
        
        
        
        cout << " Your Score is " << strike << " Strike " << ball << " Ball " << out << " Out " << endl;
        
        strike=0;
        ball=0;
        out=0;
        
        
    }
    
    
}

