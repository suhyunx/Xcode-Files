//
//  main.cpp
//  20140406
//
//  Created by JM Park on 2014. 4. 6..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class car {
private:
    int x;
protected:
    int wheel;
    char * engine;
    char * name;
public:
    
};
class bus:car {
private:
    int pay;
    int hand;
public:
    bus() {
        pay=2000;
        hand=45;
        wheel=4;
        engine=new char[20];
        strcpy(engine,"2000");
        name=new char[20];
        strcpy(name,"blocked");
    }
    void output() {
        cout << engine << endl;
        cout << name << endl;
    }
};

class k5:car {
    
};

int main(int argc, const char * argv[])
{
    bus bus1;
    bus1.output();
}

