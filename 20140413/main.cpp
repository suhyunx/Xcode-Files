//
//  main.cpp
//  20140413
//
//  Created by JM Park on 2014. 4. 13..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    int x;
    int y;
public:
    void input() {
        cout << " FIRST NUMBER: ";
        cin >> x;
        cout << " SECOND NUMBER: ";
        cin >> y;
    }
    void output() {
        cout << " RESULT: " << x+y << endl;
    }
    
    
};
int main(int argc, const char * argv[])
{
    test a;
    
    a.input();
    a.output();
    
    
    return 0;
}

