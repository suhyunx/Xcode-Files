//
//  main.cpp
//  20150225
//
//  Created by JM Park on 2015. 2. 25..
//  Copyright (c) 2015년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    int b;
    int count=0;
    
    cout << " 첫번째 숫자를 입력해주세요: ";
    cin >> a;
    
    cout << " 두번째 숫자를 입력해주세요: ";
    cin >> b;
    
    cout << " 계산할 연산자를 선택해 주세요 " << endl;
    cout << " 1) 덧셈, 2) 뺄셈, 3) 곱셈, 4) 나눗셈 " << endl;
    cin >> count;
    
    if(count==1)
        cout << a+b << endl;
        
    else if(count==2)
        cout << a-b << endl;

    else if(count==3)
        cout << a*b << endl;
    else if(count==4)
        cout << a/b << endl;
    else
        cout << " 잘못된 숫자를 입력하셨습니다. " << endl;
    
    //std::cout << "Hello, World!\n";
    return 0;
}
