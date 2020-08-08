//
//  main.cpp
//  20140106_2
//
//  Created by JM Park on 2014. 1. 6..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a, b, c;
    int post=10000;
    
    cout << " 나이를 입력하세요 " << endl;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    if(a<10)
        cout << " 입장료는 무료입니다 " << endl;
    else if(a>=10 && a<=19)
        cout << " 입징료는 " << post/2 << " 입니다 " << endl;
    else if(a>=20 && a<=59)
        cout << " 입장료는 " << post << " 입니다 " << endl;
    else
        cout << " 입장료는 무료입니다 " << endl;
    
    
    if(b<10)
        cout << " 입장료는 무료입니다 " << endl;
    else if(b>=10 && b>=19)
        cout << " 입징료는 " << post/2 << " 입니다 " << endl;
    else if(b>=20 && b<=59)
        cout << " 입장료는 " << post << " 입니다 " << endl;
    else
        cout << " 입장료는 무료입니다 " << endl;
    
    if(c<10)
        cout << " 입장료는 무료입니다 " << endl;
    else if(c>=10 && c<=19)
        cout << " 입징료는 " << post/2 << " 입니다 " << endl;
    else if(c>=20 && c<=59)
        cout << " 입장료는 " << post << " 입니다 " << endl;
    else
        cout << " 입장료는 무료입니다 " << endl;
    
    
    
    return 0;
}

