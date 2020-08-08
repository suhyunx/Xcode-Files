//
//  main.cpp
//  20140323
//
//  Created by JM Park on 2014. 3. 23..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    int x;
    int y;
public:
    void put() {
        cout << " 첫번째 숫자를 입력해주세요 " << endl;
        cin >> x;
        cout << " 두번째 숫자를 입력해주세요 " << endl;
        cin >> y;
    }
    void plus() {
        cout << x+y << endl;
    }
    void minus() {
        cout << x-y << endl;
    }
    void multi() {
        cout << x*y << endl;
    }
    void vid() {
        cout << x/y << endl;
    }
};


int main(int argc, const char * argv[])
{
    int count=0;
    test a;
    
    a.put();
    
    cout << " 연산 방법을 선택해주세요 " << endl;
    cout << " 1) 덧셈, 2) 뺄셈, 3) 곱셈, 4) 나눗셈 " << endl;
    cin >> count;
    
    if(count==1)
        a.plus();
    else if(count==2)
        a.minus();
    else if(count==3)
        a.multi();
    else if(count==4)
        a.vid();
    else
        return 0;
}

