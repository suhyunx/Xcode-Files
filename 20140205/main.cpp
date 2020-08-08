//
//  main.cpp
//  20140205
//
//  Created by JM Park on 2014. 2. 5..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class paradin {
private:
    char * sword;
    char * defence;
public:
    char * user_id;
    bool sex;
    int hp;
    
    void testf() {
        hp=100;
        sword=new char[10];
        strcpy(sword, "test");
    }
    void outf() {
        cout << hp << endl;
        cout << sword << endl;
        
    }
};

int main(int argc, const char * argv[])
{
    paradin a;
    a.hp=1000;
    a.user_id=new char[50];
    
    
    cout << a.hp;
    strcpy(a.user_id, "test");
    cout << a.user_id;
    a.testf();
    a.outf();
    
    return 0;
}

