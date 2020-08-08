//
//  main.cpp
//  20140406_2
//
//  Created by JM Park on 2014. 4. 6..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    static int count;
    const int i;
    const int j;
public:
    test():i(0),j(0) {
        
    }
    static void start() {
        count=0;
    }
    static void add() {
        count++;
        cout << count;
    }
    void output() {
        cout << i << endl;
    }
};

int main(int argc, const char * argv[])
{
    test a;
    a.output();
}

