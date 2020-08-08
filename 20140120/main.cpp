//
//  main.cpp
//  20140120
//
//  Created by JM Park on 2014. 1. 20..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int add(int x, int y);

int mdd(int x, int y);

int xdd(int x, int y);


int main(int argc, const char * argv[])
{
    int put;
    int a;
    int b;
    
    cout << " 두개의 숫자를 입력해주십시오 " << endl;
    
    cin >> a;
    cin >> b;
    
    cout << " 연산방법을 선택하십시오 " << endl;
    cout << " 1) 덧셈, 2) 뺄셈, 3) 곱셈, 4) 종료 " << endl;
    
    cin >> put;
    
   
    
    if(put==1)
        cout << "x+y의 값은 " << add(a, b) << " 입니다 " << endl;
    
    else if(put==2)
        cout << "x-y의 값은 " << mdd(a, b) << " 입니다 " << endl;
    
    else if(put==3)
        cout << "x*y의 값은 " << xdd(a, b) << " 입니다 " << endl;
    
    else if(put==4)
        return 0;
        
    
    
    

}

int add(int x, int y) {
    return x+y;
}

int mdd(int x, int y) {
    return x-y;
}

int xdd(int x, int y) {
    return x*y;
}
