//
//  main.cpp
//  20140106
//
//  Created by JM Park on 2014. 1. 6..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a, b, c;
    int x, y, z;
    
    int strike=0;
    int ball=0;
    int out=0;
    
    
    a=4;
    b=5;
    c=9;

    cout << " 숫자를 입력하세요 " << endl;
        
    cin >> x;
    cin >> y;
    cin >> z;
        
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
    
    cout << " 입력하신 숫자는 " << x << y << z << " 입니다 " << endl;
    cout << " 점수는 " << strike << " 스트라이크 " << ball << " 볼 " << out << " 아웃 " << " 입니다 " << endl;
        
    
    return 0;
}

