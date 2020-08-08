//
//  main.cpp
//  20140102_2
//
//  Created by JM Park on 2014. 1. 2..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class unit {
protected:
    int hp;
    int attack;
    int defence;
public:
    unit() { hp=0; attack=0; defence=0; }
    void unit_view() {
        cout << " 채력 : " << hp << endl;
        cout << " 공격력 : " << attack << endl;
        cout << " 방어력 : " << defence << endl;
        
    }
};

class soldier : unit {
private:
    char * mode;
public:
    soldier(int php, int pattack, int pdefence, char * pmode) {
        mode=new char[strlen(pmode)+1];
        strcpy(mode, pmode);
        hp=php;
        attack=pattack;
        defence=pdefence;
        
    }
    void soldier_view() {
        cout << " 채력 : " << hp << endl;
        cout << " 공격력 : " << attack << endl;
        cout << " 방어력 : " << defence << endl;
        cout << " 종류 : " << mode << endl;
    }
};

class tank : unit {
private:
    char * mode;
public:
    tank(int php, int pattack, int pdefence, char * pmode) {
        mode=new char[strlen(pmode)+1];
        strcpy(mode,pmode);
        hp=php;
        attack=pattack;
        defence=pdefence;
    }
    void tank_view() {
        cout << " 채력 : " << hp << endl;
        cout << " 공격력 : " << attack << endl;
        cout << " 방어력 : " << defence << endl;
        cout << " 종류 : " << mode << endl;
    }
};

class air : unit {
private:
    char * mode;
public:
    air(int php, int pattack, int pdefence, char * pmode) {
        mode=new char[strlen(pmode)+1];
        strcpy(mode,pmode);
        hp=php;
        attack=pattack;
        defence=pdefence;
    }
    void air_view() {
        cout << " 채력 : " << hp << endl;
        cout << " 공격력 : " << attack << endl;
        cout << " 방어력 : " << defence << endl;
        cout << " 종류 : " << mode << endl;
    }
};

int main(int argc, const char * argv[])
{
    
    soldier a1(100, 50, 20, " 전투병 ");
    a1.soldier_view();
    tank t1(1000, 500, 300, " 장갑차 ");
    t1.tank_view();
    air z1(400, 400, 30, " 전투기 ");
    z1.air_view();
    
}

