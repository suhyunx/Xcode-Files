//
//  main.cpp
//  20140205_3
//
//  Created by JM Park on 2014. 2. 5..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    int x;
    int y;
public:
    test(int a, int b) {
        x=a;
        y=b;
        cout << " 객체 생성 및 메모리 할당 완료 " << endl;
    }
    test(){ ; }
    void out() {
        cout << x << " , " << y << endl;
    }
    ~test(){
        cout << " 객체 삭제 및 메모리 제거 완료 " << endl;
    }
};

int main(int argc, const char * argv[])
{
    test a=test(10, 20);
    test c(30, 40);
    test b;
    a.out();
    b.out();
    
    cin.get();
    return 0;
}

