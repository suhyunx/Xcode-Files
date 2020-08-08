//
//  main.cpp
//  20131119
//
//  Created by JM Park on 13. 11. 19..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[])
{

    int x = 0;
    int y = 0;
    int z = 0;
    
    int num1;
    int num2;
    int num3;
    
    int strike=0;
    int ball=0;
    int out=0;
    int count=0;
    
    x=4;
    y=5;
    z=9;
    
    
    
    
    while(1) {
        
        cout << " 세개의 값을 입력해주세요. " << endl;
        
        cin >> num1;
        cin >> num2;
        cin >> num3;
        
        cout << " 입력하신 숫자는 " << num1 << num2 << num3 << " 입니다 " << endl;
        
        if(x==num1)
            strike++;
        else if(x==num2 || x==num3)
            ball++;
        else
            out++;
        
        if(y==num2)
            strike++;
        else if(y==num1 || y==num3)
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
            cout << strike <<  " 스트라이크 입니다. 게임을 종료헙니다.. " << endl;
        break;
        }
        
        cout << strike << " 스트라이크 " << ball << " 볼 " << out << " 아웃 입니다 " << endl;
        
        strike=0;
        ball=0;
        out=0;
        
    }
    
    
        
        
        
}

