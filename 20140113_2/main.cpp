//
//  main.cpp
//  20140113_2
//
//  Created by JM Park on 2014. 1. 13..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    char count[10];
    int i=0;
    
    while(1) {
        if(i==0)
            cout << " 첫번째 글자를 입력해 주세요 : " << endl;
        if(i>0 && i<9)
            cout << " 계속 입력해주세요 " << endl;
        else if(i==9) {
            *(count+i)='.';
            break;
            
        }
    
    cin >> *(count+i);
    if( *(count+i) == '.' )
        break;
    i++;
    }
    
    i=0;
    
    while(count[i]!='.') {
        cout << *(count+i) << endl;
        i++;
    }
    cout << " 입력하신 글자수는 " << i << " 개 입니다 " << endl;
}