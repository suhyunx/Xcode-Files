//
//  main.cpp
//  20140205_2
//
//  Created by JM Park on 2014. 2. 5..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

namespace a {
    int x;
    int y;
}

using namespace a;

class test {
private:
    int x;
    int y;
    
public:
    void sum() {
        cin >> x;
        cin >> y;
        cout << x+y << endl;
    }
    void num() {
        cin >> x;
        cin >> y;
        cout << x-y << endl;
    }
    void xum() {
        cin >> x;
        cin >> y;
        cout << x*y << endl;
    }
    
};

int main(int argc, const char * argv[])
{
    test a;
    int select;
    
    cout << " 계산할 연산자를 고르세요. " << endl;
    cout << " 1) 덧샘, 2) 뺄샘, 3) 곱셈 " << endl;
    
    cin >> select;
    
    if(select==1)
        a.sum();
    else if(select==2)
        a.num();
    else if(select==3)
        a.xum();
    
    //int x;
    a::x=100;
    cout << a::x << endl;
    
    
    return 0;
    
}

