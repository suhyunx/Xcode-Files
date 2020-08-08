//
//  main.cpp
//  20140206
//
//  Created by JM Park on 2014. 2. 6..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    int x;
    int y;
public:
    void clim() {
        cout << " 첫번째 값을 입력해주세요 " << endl;
        cin >> x;
        cout << " 두번째 값을 입력해주세요 " << endl;
        cin >> y;
    }
    void sum() {
        cout << x+y << endl;
    }
    void num() {
        cout << x-y << endl;
    }
    void xum() {
        cout << x*y << endl;
    }
};

int main(int argc, const char * argv[])
{
    test a;
    int select;
    
    a.clim();
    
    cout << " 계산할 연산자를 입력해주세요 " << endl;
    cout << " 1) 덧셈, 2) 뺄셈, 3) 곱셈 " << endl;
    
    cin >> select;
    
    if(select==1)
        a.sum();
    else if(select==2)
        a.num();
    else if(select==3)
         a.xum();
    
    
    
    return 0;
}

