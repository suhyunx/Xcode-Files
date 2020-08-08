//
//  main.cpp
//  20131118
//
//  Created by JM Park on 13. 11. 18..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int main( )
{
    int a, b, c;
    int x, y, z;
    
    int strike=0;
    int ball=0;
    int out=0;
    int count=0;
    
    a=4;
    b=5;
    c=9;
    
    while(1) {
        
        cout << " Write three numbers " << endl;
        
        cin >> x;
        cin >> y;
        cin >> z;
        
        cout << " Your number is " << x << y << z << endl;
        
        if(a==x)
            strike++;
        else if(a==y || a==z)
            ball++;
        else
            out++;
        
        if(b==y)
            strike++;
        else if(b==x || b==z)
            ball++;
        else
            out++;
        
        if(c==z)
            strike++;
        else if(c==x || c==y)
            ball++;
        else
            out++;
            count++;
        
        if(strike==3) {
            cout << strike << " It's Strike. Game Over.. " << endl;
            break;
        }
        cout << " Your Score is " << strike << " Strike " << ball << " Ball " << out << " Out " << endl;
        
        strike=0;
        ball=0;
        out=0;
        
    }


}

